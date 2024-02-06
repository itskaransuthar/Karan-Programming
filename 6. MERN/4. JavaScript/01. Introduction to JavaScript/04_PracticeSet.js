/*
Que: 1. Create a variable of type string and try to add a number to it?
*/
// const str = "Hello"; // TypeError aa jayega 
let str = "Hello";
str = str + "5";

console.log(str); 
// Output: Hello5

/*
Que: 2. Use typeof operator to find the datatype of the string in last question? 
*/
console.log(typeof str);
// Output: string

/*
Que: 3. Create a const object in javascript. Can you change it to hold a number later? 
*/
const obj = {
  name: "Harry",
  section: 1,
  isPrincipal: false
}

// obj = "Harry"; // TypeError aa jayega
obj["name"] = "Karan";
console.log(obj["name"])
// Output: Karan

console.log(typeof obj["name"])
// Output: string

/*
Que: 4. Try to add a new key to the const object in problem 3. Were you able? 
*/
obj["age"] = 21;
console.log(obj["age"])
// Output: 21

console.log(obj)
// Output: { name: 'Karan', section: 1, isPrincipal: false, age: 21 }

/*
Que: 5. Write a JS program to create a word-meaning dictionary of 5 words?
*/
const dict = {
  appreciate: "recognize the full worth of",
  ataraxia: "a state of freedom from emotional disturbance and anxiety",
  yakka: "work, especially hard work",
  aver: "to assert or affirm with confidence",
  telluric: "of or proceeding from the earth or soil"
}

console.table(dict)
/*
┌────────────┬─────────────────────────────────────────────────────────────┐
│  (index)   │                           Values                            │
├────────────┼─────────────────────────────────────────────────────────────┤
│ appreciate │                'recognize the full worth of'                │
│  ataraxia  │ 'a state of freedom from emotional disturbance and anxiety' │
│   yakka    │                'work, especially hard work'                 │
│    aver    │            'to assert or affirm with confidence'            │
│  telluric  │          'of or proceeding from the earth or soil'          │
└────────────┴─────────────────────────────────────────────────────────────┘
*/
