/*
* Filter for numbers divisible by 10 from a given array
*/

let arr = [10, 29, 30, 404, 50, 340, 43];

let newArr = arr.filter((num) => {
    if(num % 10 == 0)
        return num;
})

console.log(newArr);