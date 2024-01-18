# Multiplication table making (Take input from user)

num = int(input("Enter the number: "))

for i in range(1, 11):
    print(num, " x ", i, " = ", num * i, sep = "")

