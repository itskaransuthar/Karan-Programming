// Multiplication table making (Take input from user)

const prompt = require("prompt-sync")();

let num = Number(prompt("\nEnter a number: "));

for (let i = 1; i <= 10; i++)
{
    console.log(num + " x " + i + " = " + (num * i));
}