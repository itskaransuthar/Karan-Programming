const prompt = require('prompt-sync')();

/*
* Que: 1. Create an array of numbers and take input from the user to add numbers to this array
*/

let arr1 = prompt("Enter elements of array: ").split(" ");
// console.log(arr1);

for (let i in arr1) {
    arr1[i] = Number.parseInt(arr1[i]);
}

console.log(arr1);

let num = prompt("Enter number to add: ");
num = Number.parseInt(num);

arr1.push(num);

console.log(arr1);