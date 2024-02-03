let prompt = require('prompt-sync')()

/*
* Que: 1. WAP to print the marks of a student in an object using for loop
*/
const marks = {
    "Karan": 90,
    "Bhavika": 80,
    "Anshu": 98
};

for (let i = 0; i < Object.keys(marks).length; i++)
{
    console.log(`Marks of ${Object.keys(marks)[i]}: ${marks[Object.keys(marks)[i]]}`);
}
/* Output
Marks of Karan: 90
Marks of Bhavika: 80
Marks of Anshu: 98
*/

/*
* Que: 2. Write above program using for in loop
*/
for (let i in marks)
{
    console.log(`Marks of ${i}: ${marks[i]}`);
}
/* Output
Marks of Karan: 90
Marks of Bhavika: 80
Marks of Anshu: 98
*/

/*
* Que: 3. WAP to print "Try again" until the user enters the correct number
*/
let num = 5;

while(1)
{
    let userNum = prompt("Enter a number: ");
    userNum = Number.parseInt(userNum);

    if(num == userNum)
    {
        console.log("Correct");
        break;
    }

    console.log("Try again");
}
/* Output
Enter a number: 4
Try again
Enter a number: 3
Try again
Enter a number: 2
Try again
Enter a number: 5
Correct
*/

/*
* Que: 4. Write a function to find mean of 5 numbers
*/
const findMean = (a, b, c, d, e) => {
    return (a + b + c + d + e) / 5;
}

let mean = findMean(10, 20, 30, 40, 50);

console.log(`Mean of 5 numbers is ${mean}`);
/* Output
Mean of 5 numbers is 30
*/