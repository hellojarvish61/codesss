// // function sayHello (){
// //     console.log("hello")
// // }

// // sayHello();


// // const sayHello = () => {
// //     console.log("hey");
// // }
// // sayHello();

// // const add = (a,b) => {
// //     console.log("heyy");
// // } 



// // function addNumber(){
// //     console.log(arguments);
// // };
// // addNumber(10,22,33,44,55);





// // unlimited argument accepted
// // function addNumber(){
// //     let ans = 0;
// //     for( let i = 0 ; i <arguments.length;i++){
// //         ans = ans + arguments[i];
// //     }
// //     return ans;
// // }



// // function addNumberV2(...piyush){
// //     let ans = 0;
// //     for(let i = 0;i<piyush.length;i++){
// //         ans = ans + piyush[i];
// //     }
// //     return ans ;
// // }


// // this keyword in js

// // const obj = {
// //     value :20,
// //     myFunction:function(){
// //         console.log("value is" + this)
// //     } 
// // };

// // obj.myFunction();





// // const obj = {
// //     value:20,
// //     myFucntion:()=> {
// //         console.log(this)




// // foreach



// // arr
// // const sudents = ["piyush","jhon","jane"];

// // function print(n){
// //     console.log(n);
// // }
// // students.forEach(print);


// // const students = ["piyush","jhon","jane"];
// // students.forEach((val)=>console.log(val)); // val is callback

// // for each print * 2 number of array
// const number = [1,2,3,4,5,6,7];
// number.forEach((num)=>console.log(num*2))

// // using forEach but we want new array
// // const numbers = [1,2,3,4,5,6,7];
// // let newArr = [];
// // numbers.forEach((num)=>newArr.push(num*2));
// // console.log(newArr); 


// // const numbers = [1,2,3,4,5,6,7];

// // function double(n){
// //     return n * 2;
// // }
// // let newArr = number.forEach(double);
// // console.log(newArr);

// // for each return nhi krta use only for printing the array but we use map for return the array

// // const numbers = [1,2,3,4,5,6,7];

// // function double(n){
// //     return n * 2;
// // }
// // let newArr = number.forEach(double);
// // console.log(newArr);




// // find function 

// // const numbers = [1,2,3,4,5,6,7];

// // let ans =  numbers.find((nums)=> nums === 4);
// // console.log(ans);


// // filter ////////////////////////////

// const numbers = [1,2,3,4,5,6,7];

// const newArr = numbers.filter((num)=>nums%2 ===0);




const button = document.getElementById("search-button");
const input = document.getElementById('city-input');

const cityName = document.getElementById('city-name');
const cityTime = document.getElementById('city-time');
const cityTemp = document.getElementById('city-temp');
async function  getData(cityName){
   const promise = await fetch(
        `http://api.weatherapi.com/v1/current.json?key=c8f1168fc68d40f4a96131214253101&q=${cityName}&aqi=yes`
    );
    return await promise.json()
}
button.addEventListener("click",()=>{
    const value =  input.value;
   const result = getData(value);
   cityName.innerText = '${result.location.name},${result.location.region} - ${result.location.country}'
   cityTime.innerText = result.location.localtime;
   cityTemp.innerText =  result.current.temp_c;
   console.log(result);
})





