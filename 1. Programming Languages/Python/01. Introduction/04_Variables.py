a = 10
b = 20
c = 10

print(a)
print(b)
print(c)

print(id(a))
print(id(b))
print(id(c))

'''
10
20
10
10814696
10815016
10814696
'''

a = b = c = 40
print(a)
print(b)
print(c)

print(id(a))
print(id(b))
print(id(c))

'''
40
40
40
10815656
10815656
10815656
'''

a, b, c = 100, "Karan", 4.5
print(a)
print(b)
print(c)

print(id(a))
print(id(b))
print(id(c))

'''
100z
Karan
4.5
10817576
140275018627120
140275013404208
'''