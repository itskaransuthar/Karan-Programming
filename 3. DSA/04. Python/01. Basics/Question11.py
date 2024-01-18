# Check whether a given number is prime or not

n = eval(input("Enter the number: "))

for i in range(2, n):
    if(n <= 1):
        print(n, "is not a prime number.")
        break
    
    if(n % i == 0):
        print(n, "is not a prime number.")
        break
else:
    print(n, 'is a prime number.')