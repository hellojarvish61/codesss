// number and maths

// const score = 400;

// const balance = new Number(400);
// console.log(balance);

// console.log(balance.toString());

// const hundreds = 100000000;
// console.log(hundreds.toLocaleString("en-IN"));

//******************MATHS************************** */

// console.log(Math);
// console.log(Math.abs(-4));
// console.log(Math.round(4.8));

// console.log(Math.max(4,3,6,8));
// console.log(Math.min(4,3,6,8));


// random value in b/w 0 to 1
//console.log(Math.random());

// math.floor helps to roundoff the value
//console.log(Math.floor(Math.random()*10)+1);

const min = 1;
const max = 6;
console.log(Math.floor(Math.random()*(max - min +1))+min)
// max - min = isiliye kiya kyuki hume range chaliye tha uski range me vlaue chaliye hme
// + 1 = isiliye kiya 0 wala case avoid krne ke liye
// + min = minimum se kaam nhi ho value isilye kiye hm