/*
Que: 1. Use logical operators to find whether the age of a person lies between 10 and 20
*/
// let age = prompt("Enter your age: ");
// age = Number.parseInt(age);
let age = 24;

if(10 <= age && age <= 20)
{
    console.log("You are in between 10 and 20");
}
else 
{
    console.log("You are not in between 10 and 20");
}
// Output: You are not in between 10 and 20

/*
Que: 2. Demonstrate the use of switch case statements in javascript
*/
let day = "Monday";

switch(day)
{
    case "Monday":
        console.log("Monday hain jii");
        break;

    case "Tuesday":
        console.log("Tuesday hain jii");
        break;

    case "Wednesday":
        console.log("Wednesday hain jii");
        break;

    case "Thursday":
        console.log("Thursday hain jii");
        break;

    case "Friday":
        console.log("Friday hain jii");
        break;

    case "Saturday":
        console.log("Saturday hain jii");
        break;

    case "Sunday":
        console.log("Sunday hain jii");
        break;

    default:
        console.log("Invalid day");
}
// Output: Monday hain jii

/*
Que: 3. Write a program to find whether a number is divisible by 2 and 3
*/
// let num = prompt("Enter a number: ");
// num = Number.parseInt(num);
let num = 34;

if(num % 3 == 0 && num % 2 == 0)
{
    console.log("Number is divisible by 2 and 3");
}
else 
{
    console.log("Number is not divisible by 2 and 3");
}
// Output: Number is not divisible by 2 and 3

/*
Que: 4. Write a program to find whether a number is divisible by 2 or 3
*/
// let Num = prompt("Enter a number: ");
// Num = Number.parseInt(num);
let Num = 34;

if(Num % 3 == 0 || Num % 2 == 0)
{
    console.log("Number is divisible by 2 or 3");
}
else 
{
    console.log("Number is not divisible by 2 or 3");
}
// Output: Number is divisible by 2 or 3

/*
Que: 5: Print "You can drive" or "You cannot drive" based on the age being greater than 18 using ternary operator
*/
// let Age = prompt("Enter your age: ");
// Age = Number.parseInt(Age);

let Age = 19;
Age >= 18 ? console.log("You can drive") : console.log("You cannot drive");
// Output: You can drive