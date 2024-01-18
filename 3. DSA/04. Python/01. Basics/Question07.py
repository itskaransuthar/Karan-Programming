# Sum of first 'n' natural numbers

n = int(input("Enter n: "))

#* Method 1
sum = n * (n + 1) // 2

#* Method 2
sum = 0
for i in range(n + 1):
    sum += i

print("Sum of first ", n, " natural numbers = ", sum, sep = '')