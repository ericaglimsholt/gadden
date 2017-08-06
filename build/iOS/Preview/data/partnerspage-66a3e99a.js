var Observable = require("FuseJS/Observable");
var partners = Observable();

function Partners(item) {
  this.title = item.title;
  this.image = item.cover.url;
  this.text = item.text;
  this.link = item.link;
  this.logo = item.logotype.thumbs.small;
};

fetch("https://dev.jexpo.se/dev/forms/ws:partners?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Partners(r));
    });
    partners.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    partners: partners
};
