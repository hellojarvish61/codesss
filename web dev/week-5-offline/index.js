//arrow fns

function sum(a,b){
    return a + b;
}
const ans = sum(1,2);
console.log(ans);


// arrow function vs normal function 

function sum (a,b){
    return a + b;
}

const sum = (a,b) =>{
    return a+b;
}

// in middleware diff

app.get("/",function(req,res){

})

// app.get("/"(req,res)=>{

// })