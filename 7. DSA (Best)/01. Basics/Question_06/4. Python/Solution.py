# Multiplication table making (Take input from user)

num = int(input("\nEnter a number: "))

for i in range(1, 11):
    print(num, 'x', i, '=', num * i)