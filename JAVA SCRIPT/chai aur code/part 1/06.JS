// string

const name = "mohit";
const surname = "ranjan";

//console.log(name+ surname);// not a good practice

//console.log(`hello my name is ${name} and my surname is ${surname}`);//modern method

const gameName = new String ("jarvish");
console.log(gameName[0]);
console.log(gameName.toUpperCase());

const newString = gameName.substring(0,4)
console.log(newString);

const anotherString = gameName.slice(-8,4)
console.log(anotherString);

const newStringOne ="    mohit        ";
console.log(newStringOne);
console.log(newStringOne.trim());

const url = "https://mohit.com/jarvish%20bhaiya";
console.log(url.replace("%20","-"))