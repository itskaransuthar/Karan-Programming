console.log("Karan")

const fullName = "Karan Suthar";
let age = 18;
var hobby = "Coding";

console.log(fullName)
console.log(age)
console.log(hobby)

/*
Karan
Karan Suthar
18
Coding
*/

let currentYear = 2022;
// let currentYear = 2021; // SyntaxError

{
  let currentYear = 2024;
  console.log(currentYear)
}

console.log(currentYear)

/*
2024
2022
*/

var currentDay = "Tuesday";
var currentDay = "Monday"; // No Error

{
  var currentDay = "Wednesday";
  console.log(currentDay)
}

console.log(currentDay)

/*
Wednesday
Wednesday
*/

const str1 = "Bhavika";
const str2 = "Suthar";

// str1 = "Karan";     // TypeError
// let str1 = "Karan"; // SyntaxError

console.log(str1);
console.log(str2);
