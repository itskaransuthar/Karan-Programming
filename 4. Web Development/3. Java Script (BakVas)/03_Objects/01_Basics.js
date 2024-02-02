// Singleton
Object.create

// Array
myArray = ["H", "i"]
console.log(myArray[0], myArray[1])

/*
H i
*/

// Object Literals
const jsUser = {
    // "name": "Karan" 
    name: "Karan",
    "Full Name": "Karan Suthar",
    age: 18,
    location: "Baroda",
    "email": "ks5687129@gmail.com",
    isLoggedIn: false,
    lastLoginDays: ["Monday", "Saturday"]
}

// console.log(jsUser[name]) //! ReferenceError: name is not defined
console.log(jsUser["name"])
console.log(jsUser.name)

console.log(jsUser["email"])
console.log(jsUser.email)

console.log(jsUser["Full Name"])
// console.log(jsUser.Full Name) //! SyntaxError

/*
Karan
Karan
ks5687129@gmail.com
ks5687129@gmail.com
Karan Suthar
*/

const mySymbol = Symbol("Key10");
const mySym = Symbol("Key20");

const jsUser1 = {
    name: "Karan", 
    "full Name": "Karan Suthar",
    mySymbol: "Key1",
    [mySym]: "Key2"
}

console.log(jsUser1)
console.log(jsUser1.mySymbol)
console.log(typeof jsUser1.mySymbol)

console.log(jsUser1["mySymbol"])
console.log(typeof jsUser1["mySymbol"])

// console.log(jsUser1.mySym) //! ReferenceError: mySym if not defined

console.log(jsUser1[mySym])
console.log(typeof jsUser1[mySym])