# Sum of square of first 'n' natural numbers

n = int(input("Enter the number: "))

#* Method 1
sum = n * (n + 1) // 2 * (2 * n + 1) // 3
print("Sum of square of first 'n' natural numbers:", sum)

#* Method 2
sum = 0
for i in range(n + 1):
    # sum += i * i;
    sum += i ** 2;

print("Sum of square of first 'n' natural numbers:", sum)