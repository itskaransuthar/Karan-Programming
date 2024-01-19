// Dates

let myDate = new Date();
console.log(myDate)           
// 2024-01-19T05:47:54.650Z

console.log(myDate.toString())
//Fri Jan 19 2024 11:18:51 GMT+0530 (India Standard Time)

console.log(myDate.toDateString())
// Fri Jan 19 2024

console.log(myDate.toLocaleDateString())
// 1/19/2024

console.log(myDate.toLocaleTimeString())
// 11:21:24 AM

console.log(myDate.toLocaleString())
// 1/19/2024, 11:21:24 AM

console.log(myDate.toTimeString())
// 11:22:18 GMT+0530 (India Standard Time)

console.log(myDate.toJSON())
// 2024-01-19T05:52:49.279Z

console.log(typeof myDate)
// object

let myBirthDate = new Date(2002, 9, 28, 16, 25, 37)
console.log(myBirthDate.toDateString())
// Mon Oct 28 2002

console.log(myBirthDate.toLocaleString())
// 10/28/2002, 4:25:37 PM

//! Note: Month start from index 0

let gfBirthDate = new Date("11-19-2001")
console.log(gfBirthDate.toLocaleString())

let myTimeStamp = Date.now()
console.log(myTimeStamp)
// 1705644072871 
// (This value is in milliseconds)

let createDate = new Date("01-19-2024")
console.log(createDate.getTime());
// 1705602600000

console.log(Math.floor(Date.now()/1000)); 
//? milliseconds to seconds
// 1705644318

let newDate = new Date()
console.log(newDate);
// 2024-01-19T06:06:08.817Z

console.log(newDate.getMonth())
console.log(newDate.getFullYear())
console.log(newDate.getDay())
console.log(newDate.getDate())
/*
0
2024
5
19
*/

let dateOfIndependence = new Date("8-15-1947")
console.log(dateOfIndependence.toLocaleString('default', {
    weekday: "long",
    month: "long", 
    day: "2-digit",
    year: "numeric"
}))

console.log(dateOfIndependence.toDateString())

/*
Friday, August 15, 1947
Fri Aug 15 1947
*/