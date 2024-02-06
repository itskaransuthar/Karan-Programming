console.log(window.document.body.firstChild);         // #text
console.log(window.document.body.firstElementChild);  // div


console.log(window.document.body.lastChild);          // script
console.log(window.document.body.lastElementChild);   // script

console.log(window.document.body.firstElementChild.nextSibling)         // text
console.log(window.document.body.firstElementChild.nextSibling)         // text
console.log(window.document.body.firstElementChild.nextElementSibling)  // script     

console.log(window.document.body.lastElementChild);                          // script  
console.log(window.document.body.lastElementChild.previousSibling);          // text              
console.log(window.document.body.lastElementChild.previousElementSibling);   // div                       