console.log("Operators in JS")

// Arithmetic Operators
let a = 10;
let b = 4;
console.log("a + b = ", a + b);    // 14
console.log("a - b = ", a - b);    // 6
console.log("a * b = ", a * b);    // 40
console.log("a / b = ", a / b);    // 2.5
console.log("a % b = ", a % b);    // 2
console.log("a ** b = ", a ** b);  // 10000

// Increment and decrement operators
let x = 10;
x++;
console.log(x); // 11

let y = 5;
y--;
console.log(y); // 4

// Comparison Operators
let num1 = 5;
let num2 = 10;

console.log(num1 < num2);   // true
console.log(num1 > num2);   // false
console.log(num1 <= num2);  // true
console.log(num1 >= num2);  // false
console.log(num1 == num2);  // false
console.log(num1 != num2);  // true
console.log(num1 === num2); // false
console.log(num1 !== num2); // true

// Logical Operators
x = true;
y = false;

console.log(x && y); // false
console.log(x || y); // true
console.log(!x);     // false

a = 5;  // 101
b = 3;  // 011
console.log(a & b);   // 1 (001)
console.log(a | b);   // 7 (111)
console.log(a ^ b);   // 6 (110)
console.log(~a);      // -6 (assuming 32-bit integer)
console.log(a << 1);  // 10 (1010)
console.log(a >> 1);  // 2 (10)
console.log(a >>> 1); // 2 (10)