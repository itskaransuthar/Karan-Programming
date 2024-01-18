list1 = [10,20, 30]
list2 = list1
list3 = list(list1)

print(list1)
print(list2)
print(list3)

print(id(list1))
print(id(list2))
print(id(list3))

print(list1 == list2)
print(list1 == list3)

print(list1 is list2)
print(list1 is list3)

a = 10
b = 10
c = int(a)
print(id(a))
print(id(b))
print(id(c))

print(a == b)
print(a == c)

print(a is b)
print(a is c)