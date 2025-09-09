// const express = require('express');
// const jwt  = require('jsonwebtoken');
// const app = express();
// app.use(express.json());
// const users = [];
// app.post("/signup",function(req,res){
//     const username = req.body.username
//     const password = req.body.password
//     users.push({
//         username : username,
//         password : password
//     })
//     res.json({
//         message : "you are signed inn   "
//     })
// })

// app/post("/signin",function(req,res){
//     const username = req.body.username;
//     const password = req.body.password;

//     let foundUser = null;
//     for(let i = 0;i<users.length;i++){
//         if(users[i].username===username && users[i].password===password){
//             foundUser = users[i]
//         }
//     }
//     if(!foundUser){
//         res.json({
//             message:"crendiitials incrroct"
//         })
//         return
//     }else {
//         const token = jwt.sign({
//             username
//         },JWT_SECRET);
//         res.json({
//             token : token
//         })
//     }
// })
// app.get("/me",function(req,res){
//     const token = req.headers.token;
//     const decodedData = jwt.verify(token,JWT_SECRET);

//     if(decodedData.username){
//         let foundUser = null;

//         for(let i = 0 ;i<users.length;i++){
//             if(users[i].username====username && users[i].password====password){
//                 foundUser = users[i]
//             }
//         }
//         res.json({
//             username : foundUser.username,
//             password: foundUser.password
//         })
//     }
// })

// app.listen(3000);




const express = require('express');

const app = express();
app.use(express.json());

const user = [];

app.post("/signup",function(req,res){
    const username = req.body.username
    const password = req.body.password
    users.push({
        username : username,
        password : password
    })
    res.json({
        message : "you are signed inn   "
    })
})

app.post("/signin",function(req,res){
    const username = req.body.username;
    const password = req.body.password;

    let foundUser = null;

    for(let i = 0;i<user.length;i++){
        if(user[i].username == username && user[i].password == password){
            foundUser = user[i]
        }
    }
    if(foundUser){
        const token = jwt.sign({
            username : username
        },JWT_SECRET);

        res.json({
            token:token
        })
    }else{
        res.status(403).send({
            message:"invalid username or password"
        })
    }
    console.log(users)
})

app.get("/me",function(req,res){
    const token = req.headers.token
    const decodedInformation = jwt.verify(token ,JWT_SECRET);

    let foundUser = null;
    for(let i = 0;i<user.length;i++){
        if(users[i].token == token){
            foundUser = user[i]
        }
    }
    if(foundUser){
        res.json({
            username:foundUser.username,
            password: foundUser.password
        })
    }else{
        res.json({
            message:"token invalid"
        })
    }
})
app.listen(3000);