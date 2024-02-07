class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class Queue(Node):
    def __init__(self):
        self.front = None
        self.rear = None

    def EnQueue(self, value):
        self.temp = Node(value)

        if(self.rear == None):
            self.front = self.rear = self.temp
        
        else:
            self.rear.next = self.temp
            self.rear = self.temp

    def DeQueue(self):
        if(self.rear == None):
            print("Queue is empty")
            return -1
        
        else:
            self.temp = self.front
            self.front = self.front.next

            if(self.front == None):
                self.rear = None
                return self.temp.data
            
            self.temp.next = None
            return self.temp.data
        
    def display(self):
        self.temp = self.front
        while(self.temp != None):
            print(self.temp.data)
            self.temp = self.temp.next

obj = Queue();

obj.EnQueue(45);
obj.EnQueue(55);
obj.EnQueue(65);
obj.EnQueue(75);
obj.EnQueue(85);

obj.DeQueue();
obj.DeQueue();
obj.DeQueue();

obj.display();
