# Print alphabets from 'z' to 'a'

print("\nPrinting Alphabets: ", end = '');

for ch in range(ord('z'), ord('a') - 1, -1):
    print(chr(ch), end = " ")

print();