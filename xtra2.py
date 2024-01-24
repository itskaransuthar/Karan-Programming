import stack_data

lst = input().split()

for i in range(len(lst)):
    if(lst[i] == "?"):
        continue
    else:
        lst[i] = int(lst[i])

max = []
max.push(lst[0])
for i in range(len(lst)):
    if((lst[i] == "?") or (i == len(lst) - 1)):
        print(max.top())

    if(max.top() < lst[i]):
        max.push(lst[i])
    
    if(lst[i] == -1):
        max.pop()
    