# Print Fibonacci Series

n = eval(input("Enter the number: "))
fValue = 0; sValue = 1; tValue = -1
print(fValue, sValue, end = ' ')

for i in range(1, n - 1):
    tValue = fValue + sValue
    fValue = sValue
    sValue = tValue

    print(tValue, end = " ")