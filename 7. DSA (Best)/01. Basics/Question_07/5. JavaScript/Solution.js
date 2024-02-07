// Calculate power of a positive integer

const prompt = require("prompt-sync")();

let num = Number(prompt("\nEnter a number: "));
let p = Number(prompt("Enter a power: "));

let ans = num;

for (let i = 0; i < p - 1; i++)
{
    ans *= num;
}

console.log(`\n${num}^${p} = ${ans}`);