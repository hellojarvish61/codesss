// memory

// stack (primitive,copy) , heap (non- primitive ,refrence)


//**********************SATCK************************ */
let myYoutubename = "jarvishbhaiya@gmail.com";

let anothername = myYoutubename;
anothername = "chaicode";

console.log(myYoutubename);
console.log(anothername);


//************* HEAP ***************************
let user ={
    email :"jarvishbhaiya.com",
    upi:"jarvish@ybl"
}

let userTwo = userOne;

userTwo.email = "google@gmail.com";

console.log(userOne.email);
console.log(userTwo.email);
