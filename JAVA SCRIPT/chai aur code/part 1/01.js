const accountID = 144553;
let accountEmail = "mohit@gmail.com"
var accountPassword = "12345";
accountCity = "jaipur";
let accountState;

// accountID changing is not aallowed because it use const 
accountEmail = "ranjan@gmail.com";
accountPassword = "2232234";
accountCity = "GWALIOR";

/* 
PREFER NOT TO USE VAR 
BEACUSE OF ISSUE IN BLOCK SCOPE AND FUNCTIONAL SCOPE
 */

console.log(accountID,accountEmail,accountPassword,accountState);