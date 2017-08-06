var Observable = require("FuseJS/Observable");
var data = Observable();

function Article(item) {
    this.title = item.title;
    this.image = item.image.url;
    this.text = item.text;
};

var selectedArticle = Observable();

function articleClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedArticle.value = args.data;
};

fetch("https://dev.jexpo.se/dev/forms/ws:news?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Article(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataSource: data,
    articleClicked: articleClicked,
    selectedArticle: selectedArticle
};
