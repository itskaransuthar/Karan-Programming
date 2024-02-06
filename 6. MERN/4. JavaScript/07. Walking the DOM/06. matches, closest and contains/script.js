let a = window.document.getElementById("id1");

console.log(a.matches(".box"));
console.log(a.matches(".class"));

console.log(a.closest(".box"));
console.log(a.closest("#id1"));

console.log(sp1.closest(".box"));
console.log(sp1.closest("#sp1"));

console.log(a.contains(a));
console.log(a.contains(a.firstElementChild));
console.log(a.firstElementChild.contains(a));