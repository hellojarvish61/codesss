// const express = require ("express");

// const app = express();

// //app.get("/sum",function(req,res){
// app.get("/add/:firstArg/:secondArg",function(req,res){


//     // const a = req.query.a;
//     // const b = req.query.b;
//     // as you run the const a and const b that return string means that if you give 1 + 2 = 12 it read as a string but if we have to convert the string to integer to sum we use parseInt
//     // /add/1/2
//      const a = parseInt(req.params.firstArg);
//     const b = parseInt(req.params.secondArg);
//     res.json({
//         answer: a + b
//     })
// })
// app.get("/multiply",function(req,res){

// })
// app.listen(3000);






// code using middleware
const express = require('express');
const app = express();
// logs the method , timestamp and the url
function middleware(req,res,next){
    console.log("method is "+ req.method);
    console.log("method is"+ req.method);
    next();
}
app.use(loggerMiddleware);

// Middleware function
function logRequest(req, res, next) {
  console.log(`Request made to: ${req.url}`);
  next();
}

// Apply middleware to a specific route
app.get('/special', logRequest, (req, res) => {
  res.send('This route uses route-specific middleware!');
});

app.get("/sum", function(req, res) {
    console.log(req.name);
    const a = parseInt(req.query.a);
    const b = parseInt(req.query.b);

    res.json({
        ans: a + b
    })
});

app.listen(3000, () => {
  console.log('Server running on port 3000');
});