/*
Stack (Primitive), Heap (Non-Primitive)
*/

let var1 = "Karan Suthar"
let var2 = var1

console.log(var1)    // Karan Suthar
console.log(var2)    // Karan Suthar

var2 = "Bhavika Suthar"
console.log(var1)    // Karan Suthar
console.log(var2)    // Bhavika Suthar

let arr1 = [1, 2, 3]
let arr2 = arr1
console.log(arr1)    // [1, 2, 3]
console.log(arr2)    // [1, 2, 3]

arr2[1] = 20
console.log(arr1)    // [1, 20, 3]
console.log(arr2)    // [1, 20, 3]

let user1 = {
    email: "ks5687129@gmail.com",
    upi: "user@ybl"
}

let user2 = user1

console.log(user1)
console.log(user2)

/*
{ email: 'ks5687129@gmail.com', upi: 'user@ybl' }
{ email: 'ks5687129@gmail.com', upi: 'user@ybl' }
*/

user2.email = "karan5687129@gmail.com"

console.log(user1)
console.log(user2)

/*
{ email: 'karan5687129@gmail.com', upi: 'user@ybl' }
{ email: 'karan5687129@gmail.com', upi: 'user@ybl' }
*/