# Calculate power of a positive integer

num = int(input("\nEnter a number: "))
p = int(input("Enter a power: "))

ans = num

for i in range(0, p - 1):
    ans *= num

print(f"\n{num}^{p} = {ans}")