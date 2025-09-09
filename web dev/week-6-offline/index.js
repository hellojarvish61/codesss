
// write a function that takes in a username and password and return a jwt token with the username encoded in side. should return null if the username is not valid email or if the password is less than 6 charchter . try using the zod library here

// write a function that takes a jwt as input and return true if the jwt can be decoded . return false otherwise
 
// write a fuction that takes a jwt as input and return true of the jwt can br verified/

const jwt = require("jsonwebtoken");
const jwtPassword = "secret";
const zod = require("zod");

const emailSchema = zod.string().email();
const passwordSchema = zod.string().min(6);

function signJWT(username,password){
    const usernameResponse = emailSchema.safeParse(username);
    const passwordResponse = passwordSchema.safeParse(password);
    if(!usernameResponse.success||!passwordResponse.success){
        return null;
    }
    const signature =  jwt.sign({
        username
    },jwtPassword)

    return signature;
}

function verifyJWT(token){

}

function decodeJWT(token){
    const decoded = jwt.decode(token);
    if(decoded){
        r
    }
}