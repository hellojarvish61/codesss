// objects 

// construcutor method make singleton 

// object literals

const mySymbol = Symbol("key1");

const JsUser = {
    name : "Mohit",
    "fullname":"Mohit Ranjan",
    [mySymbol] : mykey1,
    age :18,
    email :"mohitranjan@google.com",
    location : "muzaffarpur",
    isLoggedIn: "fasle",
    lastLoginDays : ["monday","saturday"]
}
console.log(JsUser.location)
console.log(JsUser["email"])
console.log(JsUser["fullname"])
console.log(JsUser[mySymbol]);