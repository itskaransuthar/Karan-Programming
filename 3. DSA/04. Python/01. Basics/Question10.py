# Factorial of a given integer

n = int(input("Enter the number: "))
factorial = 1

for i in range(1, n + 1):
    factorial *= i

print(f"The factorial of {n} is {factorial}")
# print("The factorial of {} is {}".format(n, factorial))
# print("The factorial of ", n, " is ", factorial, sep = '')