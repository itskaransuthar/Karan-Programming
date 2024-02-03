/*
There are two types of data types in java script:
  1. Primitive data types
      1.1 Null
      1.2 Number
      1.3 Symbol
      1.4 String
      1.5 Boolean
      1.6 BigInt
      1.7 Undefined
  2. Non-primitive data types
      2.1 Object
*/

// Primitive Data Types
// NN SS BB U
let a = null;
let b = 345;
let c = true;
let d = BigInt("567") + BigInt("3");
let e = "Harry";
let f = Symbol("I am a nice symbol");
let g = undefined;
let h;

console.table([["a", a, typeof a], ["b", b, typeof b], ["c", c, typeof c], ["d", d, typeof d], ["e", e, typeof e], ["f", f, typeof f], ["g", g, typeof g], ["h", h, typeof h]]);

/*
┌─────────┬─────┬────────────────────────────┬─────────────┐
│ (index) │  0  │             1              │      2      │
├─────────┼─────┼────────────────────────────┼─────────────┤
│    0    │ 'a' │            null            │  'object'   │
│    1    │ 'b' │            345             │  'number'   │
│    2    │ 'c' │            true            │  'boolean'  │
│    3    │ 'd' │            570n            │  'bigint'   │
│    4    │ 'e' │          'Harry'           │  'string'   │
│    5    │ 'f' │ Symbol(I am a nice symbol) │  'symbol'   │
│    6    │ 'g' │         undefined          │ 'undefined' │
│    7    │ 'h' │         undefined          │ 'undefined' │
└─────────┴─────┴────────────────────────────┴─────────────┘
*/

// Non-Primitive Data Types
// Objects
const item = {
  "Harry": true,
  "Shubh": false,
  "Lovish": 67,
  "Rohan": undefined
}

console.log(item["Harry"]);
console.log(item["Shubh"]);
