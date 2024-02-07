// Print alphabets from 'a' to 'z'

process.stdout.write("\nPrinting Alphabets: ");

for (let ch = 'a'.charCodeAt(0); ch <= 'z'.charCodeAt(0); ch++)
{
    process.stdout.write(String.fromCharCode(ch) + " ");
}

console.log();