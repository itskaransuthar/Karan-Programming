/*
* Que: 2. Keep adding numbers to the array in question 1 until 0 is added to the array
*/

const prompt = require('prompt-sync')();

let arr = [10, 20, 30];

let num;

do {
    num = prompt("Enter a number: ");
    num = Number.parseInt(num);

    arr.push(num);
} while(num != 0);

console.log(arr);