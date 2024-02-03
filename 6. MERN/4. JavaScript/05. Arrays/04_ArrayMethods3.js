let arr = [10, 20, 30, 40, 50];

let ans = arr.slice(2, 3)

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // [ 30 ]

ans = arr.slice(2);

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // [ 30, 40, 50 ]

ans = arr.slice(-2);

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // [ 40, 50 ]

ans = arr.slice(-32);

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // [ 10, 20, 30, 40, 50 ]

ans = arr.slice(32);

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // []

ans = arr.slice(-43, 34);

console.log(arr); // [ 10, 20, 30, 40, 50 ]
console.log(ans); // [ 10, 20, 30, 40, 50 ]

console.log();
console.log();
console.log();
console.log();

//* --------------------------------------------------

let newArr = [10, 20, 30, 40, 50, 60, 70];
let newAns = newArr.splice(0, 3);

console.log(newArr); // [ 40, 50, 60, 70 ]
console.log(newAns); // [ 10, 20, 30 ]

newArr = [10, 20, 30, 40, 50, 60, 70];
newAns = newArr.splice(1, 3);

console.log(newArr); // [ 10, 50, 60, 70 ]
console.log(newAns); // [ 20, 30, 40 ]

newArr = [10, 20, 30, 40, 50, 60, 70];
newAns = newArr.splice(1, 3, 22, 33, 44);

console.log(newArr); // [ 10, 22, 33, 44, 50, 60, 70 ]
console.log(newAns); // [ 20, 30, 40 ]

newArr = [10, 20, 30, 40, 50, 60, 70];
newAns = newArr.splice(2, -3);

console.log(newArr); // [ 10, 20, 30, 40, 50, 60, 70 ]
console.log(newAns); // []

newArr = [10, 20, 30, 40, 50, 60, 70];
newAns = newArr.splice(-4, 2, -9, -8, -7);

console.log(newArr); // [ 10, 20, 30, -9, -8, -7, 60, 70 ]
console.log(newAns); // [ 40, 50 ]