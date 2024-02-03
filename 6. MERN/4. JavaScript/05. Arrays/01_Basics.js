let arr = [10, 20.4, true, false, -34, -54.53, null, 0/0, "Karan", NaN, {"age": 21}];

console.log(arr);         // [10, 20.4, true, false, -34, -54.53, null, undefined, "Karan", NaN, {"age": 21}]
console.log(arr.length);  // 11
console.log(arr[0]);      // 10
console.log(arr[1]);      // 20.4
console.log(arr[2]);      // true
console.log(arr[3]);      // false
console.log(arr[11]);     // undefined
console.log(arr[-2]);     // undefined

arr[0] = 100;

console.log(arr[0]);      // 100