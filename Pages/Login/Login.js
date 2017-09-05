var Observable = require("FuseJS/Observable");
var email = Observable("jeremydanner2@gmail.com");
var name = Observable("Jeremy");

var url = "https://dev.jexpo.se/dev/auth";
function signup(arg) {

  var requestObject = {
      "Email"         : email.value,
      "Name"          : name.value,
      "Grant_type"    : "email"
  };

  var status = 0;
  var response_ok = false;
  var x = '';
  var y = '';

  fetch(url, {
      method: 'POST',
      headers: {
          "Content-type": "application/json"
      },
      dataType: 'json',
      body: JSON.stringify(requestObject)
  }).then(function(response) {
      status = response.status;  // Get the HTTP status code
      response_ok = response.ok; // Is response.status in the 200-range?
      return response.json();    // This returns a promise
  }).then(function(responseObject) {
      console.log("Success");
      x = JSON.stringify(responseObject);
      y = JSON.stringify(requestObject);
      console.log(x);
      console.log(y);

      for (var key in responseObject) {
          console.log(key + ' : ' + responseObject[key]);
      }

  }).catch(function(err) {
    console.log("lol Error");
    console.log(err.message);
  });
}

module.exports = {
  email: email,
  name: name,
  signup: signup
};
