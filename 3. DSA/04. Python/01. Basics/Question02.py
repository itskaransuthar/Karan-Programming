# Print alphabets from 'a' to 'z'

#* Method 1
for ch in "abcdefghijklmnopqrstuvwxyz":
    print(ch, end = ' ')

#* Method 2
letters = 'abcdefghijklmnopqrstuvwxyz';
for ch in letters:
    print(ch, end = ' ')

#* Method 3
for ch in range(97, 97 + 26):
    print(chr(ch), end = ' ')

#* Method 4
for ch in range(ord('a'), ord('z') + 1):
    print(chr(ch), end = ' ')