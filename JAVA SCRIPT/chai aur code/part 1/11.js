// objects part 2

//const tinderUser = new Object() this is singleton object
const  tinderUser = {} // this is not singleton object . both are same

tinderUser.id = "123abc"
tinderUser.name = "mohit"
//console.log(tinderUser);

const regularUser = {
    email:"jarish aaaa2gmail",
    fullname:{
        userfullname:{
            firstname:"mohit",
            lastname:"ranjan"
        }
    }
}
//console.log(regularUser.fullname.userfullname.firstname//);


// objecct assign

const obj1 = {1:"a",2:"b"}
const obj2 = {3:"a",4:"b"}

//const obj3 = {obj1,obj2}
//const obj3 = Object.assign({},obj1,obj2)
const obj3 = {...obj1,...obj2}
console.log(obj3);

