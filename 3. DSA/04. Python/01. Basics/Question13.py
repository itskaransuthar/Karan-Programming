# Print nth term of Fibonacci Series

n = int(input("Enter the number: "))
fValue, sValue = 0, 1
tValue = fValue + sValue 

for i in range (1, n - 2):
    fValue, sValue = sValue, tValue
    tValue = fValue + sValue

print(f"{n}th term of Fibonacci Series:", tValue)