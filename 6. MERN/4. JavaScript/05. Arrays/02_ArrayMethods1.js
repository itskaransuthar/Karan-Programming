let arr1 = [10, 20, 30, 40, 50];
let str1 = arr1.toString();

console.log(arr1);        // [ 10, 20, 30, 40, 50 ]
console.log(str1);        // 10,20,30,40,50

console.log(typeof arr1); // object
console.log(typeof str1); // string

let arr2 = arr1.join(" and ");

console.log(arr2);         // 10 and 20 and 30 and 40 and 50
console.log(typeof arr2)   // string

let item = arr1.pop();

console.log(arr1);         // [ 10, 20, 30, 40 ]
console.log(item);         // 50
console.log(typeof item);  // number

let newLength = arr1.push(5)

console.log(arr1);              // [ 10, 20, 30, 40, 5 ]
console.log(newLength);         // 5
console.log(typeof newLength);  // number

let item2 = arr1.shift();

console.log(arr1);              // [ 20, 30, 40 ]                  
console.log(item2);             // 10                 
console.log(typeof item2);      // number                        

let newLength2 = arr1.unshift(1);

console.log(arr1);               // [ 10, 20, 30, 40 ]                 
console.log(newLength2);         // 5                     
console.log(typeof newLength2);  // number                              