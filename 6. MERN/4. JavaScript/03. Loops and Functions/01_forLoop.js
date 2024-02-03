//* Printing numbers lexographically
for (let i = 0; i < 5; i++)
{
    console.log(i + 1)
}
/* Output:
            1
            2
            3
            4
            5
*/

//* Printing sum of natural numbers
// let num = prompt("Enter a number: ");
// num = Number.parseInt(sum);
let num = 10;

let sum = 0;
for (let i = 1; i <= num; i++)
    sum += i;

console.log(sum);
// Output: 55

//* Print marks of all students
const marks = {
    "Karan": 90,
    "Bhavika": 85,
    "Anshu": 98
};

for (let i in marks)
{
    console.log(`Marks of ${i} is ${marks[i]}`);  
}
/* Output:
            Marks of Karan is 90
            Marks of Bhavika is 85
            Marks of Anshu is 98
*/

//* Print sum of all numbers in array 'arr'
const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
let total = 0;

for (let i of arr)
{
    total += i;
}

console.log("Sum =", total);
// Output: Sum = 55 

