class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insertFirst(head, data):
    if(head == None):
        head = Node(data)
        return head
    
    temp = Node(data)
    temp.next = head
    head = temp

    return head

def insertLast(head, data):
    if(head == None):
        head = Node(data)
        return head
    
    temp = head
    while temp.next:
        temp = temp.next
    
    temp.next = Node(data)
    return head

def displayLL(head):
    temp = head
    print("Printing Linked List: ", end=" ")
    while temp:
        print(temp.data, sep=" ", end=" ")
        temp = temp.next
    print()

head = None
head = insertFirst(head, 10)
head = insertFirst(head, 20)
head = insertLast(head, 30)
head = insertLast(head, 40)

displayLL(head)