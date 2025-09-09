// const express = require('express');

// const app = express();
// app.use(express.json());

// const users = [];

//     function generateToken() {
//     let options = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'];

//     let token = "";
//     for (let i = 0; i < 32; i++) {
//         token += options[Math.floor(Math.random() * options.length)];
//     }
//     return token;
// }
// app.post("/signup",function(req,res){
//     const username = req.body.username;
//     const password = req.body.password;

    
//     user.push({
//         username : username,
//         password: password
//     })
//     res.json({
//         message:"you are signed in"
//     })
// })
// app.post("/signin",function(req,res){
//     const username = req.body.username;
//     const password = req.body.password;

//     // const foundUser = users.find(function(u){
//     //     if(u.username== username && u.password == password){
//     //         return true;
//     //     }else{
//     //         return false;
//     //     }
//         let foundUser = null;

//         for(let i = 0;i<user.length;i++){
//             if(users[i].username == username && user[i].password==password){
//                 foundUser = user[i];
//             }
//         }
//         if(foundUser){
//             const token = generateToken();
//             foundUser.token = token;
//             res.json({
//                 token:token
//             })
//         }else{
//             req.status(403).send({
//                 message:"invalid username or password"
//             })
//         }
//     })

// app.get("/me",function(req,res){
//     const token = req.headers.token
//     const foundUser = null;

//     for(let i = 0;i<users.length;i++){
//         if(users[i].token == token){
//             foundUser = user[i]
//         }
//     }
//     if(foundUser){
//         res.json({
//             username:foundUser.username,
//             password:foundUser.password
//         })
//     }else{
//         res.json({
//             message:"token invalid"
//         })
//     }
// })
//     app.listen(3000);   


//  using JWT

// const express = require('express');
// const jwt = require('jsonwebtoken');
// const app = express();
// app.use(express.json());

// const JWT_SECRET = 'yourSecretKey';  // Replace with a secure secret
// const users = [];

// function generateToken() {
//     const chars = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';
//     let token = '';
//     for (let i = 0; i < 32; i++) {
//         token += chars[Math.floor(Math.random() * chars.length)];
//     }
//     return token;
// }

// app.post("/signup", (req, res) => {
//     const { username, password } = req.body;
//     users.push({ username, password });
//     res.json({ message: "you are signed in" });
// });

// app.post("/signin", (req, res) => {
//     const { username, password } = req.body;
//     let foundUser = null 
//     for (let i = 0; i < users.length; i++) {
//         if (users[i].username === username && users[i].password === password) {
//             foundUser = users[i];
//         }
//     }

//     if (foundUser) {
//         const token = jwt.sign({ username }, JWT_SECRET);
//         foundUser.token = token;  // save token for future
//         res.json({ token });
//     } else {
//         res.status(403).send({ message: "invalid username or password" });
//     }
// });

// app.get("/me", (req, res) => {
//     const token = req.headers.token;
//     try {
//         const decoded = jwt.verify(token, JWT_SECRET);
//         const username = decoded.username;

//         const foundUser = users.find(u => u.username === username && u.token === token);

//         if (foundUser) {
//             res.json({ username: foundUser.username, password: foundUser.password });
//         } else {
//             res.status(403).json({ message: "token invalid" });
//         }
//     } catch (err) {
//         res.status(403).json({ message: "invalid token" });
//     }
// });
// app.listen(3000);

