var Observable = require("FuseJS/Observable");
var data = Observable();
var selectedArticle = Observable();
var selectedLecture = Observable();

function Article(item) {
    this.title = item.title;
    this.image = item.image.url;
    this.text = item.text;
};
// Collects data from cliked article
function articleClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedArticle.value = args.data;
};
// Collects data from clicked lecture
function goToEvent(args) {
	console.log(JSON.stringify(args.data));
	selectedProgram.value = args.data;
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
    selectedArticle: selectedArticle,
    goToEvent: goToEvent,
    selectedLecture: selectedLecture
};
