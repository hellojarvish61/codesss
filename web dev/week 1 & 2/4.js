 // callback function 
// function main(){
//     console.log("5 seconds have passed")
// }
// setTimeout(main,5000); // main function is called callback






// promises 
// promises is only but it is efficint way of writing callbacks

// function setTimeoutPromisified(ms) {
//     let p = new Promise(resolve => setTimeout(resolve, ms));
//     return p;
//   }
  




//   function callback() {
//       console.log("3 seconds have passed");
//   }
  
//   setTimeoutPromisified(3000).then(callback)



// function waitFor3s(resolve){
//     setTimeout(resolve,3000)
// }
// function setTimeoutPromisified(){
//     return new Promise(waitFor3s);
// }
// function main (){
//     console.log("main is called")
// }
// waitFor3s(main);

// setTimeoutPromisified().then(main);







  