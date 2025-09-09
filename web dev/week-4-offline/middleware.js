// // const express = require('express');

// // const app = express();

// // // function that returns a boolean if the age of the person is more than 14
// // function isOldEnough(age){
// //     if(age >= 14){
// //         return true;
// //     }else{
// //         return false;
// //     }
// // }

// // app.get("/ride1",function(req,res){
// //     if(isOldEnough(req.query.age)){
// //         res.json({
// //         msg:"you have successfully riden the ride1"
// //     })
// // } else{
// //     res.status(411).json({
// //         msg:"sorry you are not of age yet"
// //     })
// //   }
// // })

// // app.get("/ride2",function(req,res){
// //     if(isOldEnough(req.query.age)){
// //         res.json({
// //         msg:"you have successfully riden the ride2"
// //     })
// // } else{
// //     res.status(411).json({
// //         msg:"sorry you are not of age yet"
// //     })
// //   }
// // })
// // app.listen(3000);//http://localhost:3000/ride1?age=14




// // using middleware

// const express = require('express');
// const app = express();

// function isOldEnoughMiddleware(req, res, next) {
//     const age = req.query.age;

//     if (age >= 14) {
//         next();
//     } else {
//         res.json({
//             msg: "Sorry, you are not of age yet",
//         });
//     }
// }

// app.get("/ride2", isOldEnoughMiddleware, function(req, res) {
//     res.json({
//         msg: "You have successfully ridden Ride 2",
//     });
// });

// app.get("/ride1", isOldEnoughMiddleware, function(req, res) {
//     res.json({
//         msg: "You have successfully ridden Ride 1",
//     });
// });

// app.listen(3000, () => {
//     console.log("Server is running on port 3000");
// });
// //http://localhost:3000/ride1?age=14














// const express = require('express');
// const app = express ();

// function isOldEnoughMiddleware(req,res,next){
//     const age = req.query.age;
//     if(age>=14){
//         next();
//     }else{
//         res.json({
//             msg: "sorry you are not of age yet"
//         })
//     }
// }
// app.use(isOldEnoughMiddleware);
// app.get("/ride1",function(req,res){
//     if(isOldEnough(req.query.age)){
//         res.json({
//         msg:"you have successfully riden the ride 1"
//     })
//     }else{
//         res.status(411).json({
//             msg:"sorry you are not of age yet"
//         })
//     }
    
// })

// app.get("/ride2",function(req,res){
//     if(isOldEnough(req.query.age)){
//         res.json({
//         msg:"you have successfully riden the ride 2"
//     })
//     }else{
//         res.status(411).json({
//             msg:"sorry you are not of age yet"
//         })
//     }
    
// })
// app.listen(3000);





const express = require('express');

const app = express();



function isOldEnough(age){
    if(age>= 14){
        return true;
    }else{
        return false;
    }
}
app.get("/ride1",function(req,res){
    if(isOldEnough(req.query.age){
        res.json({
            msg:"you have successfully riden the ride 1"
        })
    })
})