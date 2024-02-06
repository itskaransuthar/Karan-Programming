alert ("Enter value of a!")

let a = prompt("Enter a number here", '578')
a = Number.parseInt(a);

alert("You have entered a number of type " + (typeof a));

let write = confirm("Do you want to write to the page?");

if(write) {
    document.write(a);
}
else {
    document.write("Please allow me to write");
}