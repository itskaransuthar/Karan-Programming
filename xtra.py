class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LL:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def insertAtLast(self, value):
        if(self.head == None):
            temp = Node(value)
            self.head = temp
            self.tail = self.head

        else:
            temp = Node(value)
            self.tail.next = temp
            self.tail = temp

    def displayList(self):
        read = self.head
        while(read):
            print(read.data, end = " ")
            read = read.next
        print()

    def lengthLL(self, read):
        count: int = 0
        while(read):
            count += 1
            read = read.next

        return count
            

LL1 = LL()
LL2 = LL()

LL1.insertAtLast(1)
LL1.insertAtLast(3)
LL1.insertAtLast(5)
LL1.insertAtLast(10)
LL1.insertAtLast(12)

LL2.insertAtLast(4)
LL2.insertAtLast(2)
LL2.insertAtLast(6)





LL2.head.next.next.next = LL1.head.next.next

length1 = LL1.lengthLL(LL1.head)
length2 = LL2.lengthLL(LL2.head)

ptr1 = LL1.head
ptr2 = LL2.head

if(length1 > length2):
    count  = length1 - length2
    while(count):
        ptr1 = ptr1.next
        count -= 1
    
    while(ptr1 != None):
        if(ptr1 == ptr2):
            print(ptr1.data)
            break
    
        ptr1 = ptr1.next
        ptr2 = ptr2.next
    else:
        print("Nothing is common")

if(length2 > length1):
    count = length2 - length1

    while(count):
        ptr2 = ptr2.next
        count -= 1
    
    while(ptr2 != None):
        if(ptr1 == ptr2):
            print(ptr2.data)
            break
        
        ptr2 = ptr2.next
        ptr1 = ptr1.next
    else:
        print ("Nothing is common")

# print(length1)
# print(length2)

LL1.displayList()
LL2.displayList()

# print(LL1.lengthLL(LL1.head))
# LL1.displayList()





            