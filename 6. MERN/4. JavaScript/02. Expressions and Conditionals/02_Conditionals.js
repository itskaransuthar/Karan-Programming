let a = prompt("Enter a number: ");
a = Number.parseInt(a);

console.log(`The number is ${a}`);
console.log(typeof a);

if(a > 0)
{
  alert(`Number ${a} is positive`)
}
else 
  alert(`Number ${a} is not positive`)
