/*
* Create an array of square of given numbers 
*/

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const squareFunction = num => num * num;

let newArr = arr.map(squareFunction);

console.log(newArr);