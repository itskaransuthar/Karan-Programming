# Calculate power of a positive integer

num = int(input("Enter number: "))
power = int(input("Enter power: "))

#* Method 1
print(num ** power)

#* Method 2
result = 1
for i in range(power):
    result *= num;

print(result)