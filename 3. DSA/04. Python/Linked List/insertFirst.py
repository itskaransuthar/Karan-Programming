class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class LinkedList:
    def __init__(self):
        self.head = None

    def insertFirst(self, data):
        if self.head == None:
            self.head = Node(data)
        else:
            temp = Node(data)
            temp.next = self.head
            self.head = temp

    def insertLast(self, data):
        if self.head == None:
            self.head = Node(data)
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            
            temp.next = Node(data)

    def displayLL(self):
        temp = self.head
        while temp:
            print(temp.data, sep=" ", end=" ")
            temp = temp.next
        
        print()

lst = input("Enter elements of linked list: ").split()

for i in range(len(lst)):
    lst[i] = int(lst[i])

# print(lst)

obj = LinkedList()

for i in range(len(lst)):
    obj.insertFirst(lst[i])

obj.insertLast(11)
obj.insertLast(22)

obj.displayLL()