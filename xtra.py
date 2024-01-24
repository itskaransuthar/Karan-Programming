lst = [5, 7, 2, 11, '?', 8, 9, 13, '?', 12]

low = 0
high = -1

for i in range(len(lst)):
    if(lst[i] == '?'):
        high = i
        max = lst[0]
        for i in range(low, high):
            if(lst[i] == "?"):
                continue

            if(lst[i] > max):
                max = lst[i]

        print(max)
