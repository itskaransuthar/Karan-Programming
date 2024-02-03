//* METHOD 1: To create function

let a = 1;
let b = 2;
let c = 3;

function average(a, b)
{
    return (a + b) / 2;
}

console.log("Average of a and b is:", (a + b) / 2)
console.log("Average of b and c is:", (b + c) / 2)
console.log("Average of a and c is:", (a + c) / 2)
/* Output:
            Average of a and b is: 1.5
            Average of b and c is: 2.5
            Average of a and c is: 2
*/

console.log("Average of a and b is:", average(a, b))
console.log("Average of b and c is:", average(b, c))
console.log("Average of a and c is:", average(a, c))
/* Output:
            Average of a and b is: 1.5
            Average of b and c is: 2.5
            Average of a and c is: 2
*/

//* METHOD 2: To create function

const sum = (p, q) => {
    return p + q;
}

console.log(`Sum of a and b is: ${a + b}`)
console.log(`Sum of b and c is: ${b + c}`)
console.log(`Sum of a and c is: ${a + c}`)
/* Output:
            Sum of a and b is: 3
            Sum of b and c is: 5
            Sum of a and c is: 4
*/

console.log(`Sum of a and b is: ${sum(a, b)}`)
console.log(`Sum of b and c is: ${sum(b, c)}`)
console.log(`Sum of a and c is: ${sum(a, c)}`)
/* Output:
            Sum of a and b is: 3
            Sum of b and c is: 5
            Sum of a and c is: 4
*/