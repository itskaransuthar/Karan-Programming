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

