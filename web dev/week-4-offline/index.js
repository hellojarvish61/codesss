// creating an the http server


// const express = require("express");

// const app = express();

// function sum(n){
//     let ans = 0;
//     for(let i = 0;i<=n;i++){
//         ans = ans + i ;
//     }
//     return ans;
// }
// app.get("/",function(req,res){
//     const n = req.query.n;
//     const ans = sum(n);
//     res.send("hi your ans is "+ ans);
// })
// app.listen(3000);



const express = require("express");
const app = express();

const users = [{
        name:"jarvish",
        kidneys :[{
            healthy: false
        }]
    }];

    app.get("/",function(req,res){
        const johnKidneys = users[0].kidneys;
        const numberOfKidneys = johnKidneys.length;
        let numberOfHealthyKidneys  = 0;
        for(let i = 0;i<johnKidneys.length;i++){
            if(johnKidneys[i].healthy){
            numberOfHealthyKidneys = numberOfHealthyKidneys + 1;
        }
    }
    const numberOfUnhealthyKidneys = numberOfKidneys - numberOfHealthyKidneys;

    res.json({
        numberOfKidneys,
        numberOfHealthyKidneys,
        numberOfUnhealthyKidneys
    })
    })

    app.post("/",function(req,res){
        const isHealthy = req.body.isHealthy;
        users[0].kidneys.push({
            healthy:isHealthy 
        })
    })
app.listen(3000)