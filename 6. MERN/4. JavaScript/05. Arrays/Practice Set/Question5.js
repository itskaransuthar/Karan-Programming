/*
* Use reduce to calculate factorial of a given number from an array of first n natural numbers (n bring the number whose factorial needs to be calculated)
*/

let arr = [1, 2, 3, 4, 5, 6];

let result = arr.reduce((num1, num2) => {
    return num1 * num2;
})

console.log(result);