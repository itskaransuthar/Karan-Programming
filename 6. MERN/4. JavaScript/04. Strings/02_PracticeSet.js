/*
Que: 1. What will be output of the following code?
        console.log("har\"".length);
*/

console.log("har\"".length); // 4

/*
Que: 2. Explore the includes, startsWith and endsWith function of a string
*/

let myString = "Hello, World!";

console.log(myString.includes("Hello,")); // true
console.log(myString.includes("hello,")); // false

console.log(myString.startsWith("Hell")); // true
console.log(myString.startsWith("Hero")); // false

console.log(myString.endsWith("World!")); // true
console.log(myString.endsWith("Tiger!")); // false

/*
Que: 3. WAP to convert a given string to lowercase
*/

let str = "karaN SutHar!";
console.log(str.toLowerCase()) // karan suthar
console.log(str.toUpperCase()) // KARAN SUTHAR

/*
Que: 4. Extract the amount out of this string "Please give Rs 1000"
*/
let myStr = "Please give Rs 1000";

let subString = Number.parseInt(myStr.slice(-4));

console.log(typeof subString);               // number
console.log("Extracted String:", subString)  // Extracted String: 1000

/*
Que: 5. Try to change 4th character of the string were you able to?
*/

"We can't modified string in javascript because it is immutable"

let friend = "Shiv Patel";
friend[2] = 'I';

console.log(friend); // Shiv Patel