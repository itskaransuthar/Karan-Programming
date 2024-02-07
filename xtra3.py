class CircularQueue:
    def __init__(self, size):
        self.size = size
        self.queue = [None] * size
        self.front = self.rear = -1

    def EnQueue(self, data):
        if((self.rear + 1) % self.size == self.front):
            print("Queue is full")
            return
        else:
            if(self.rear == -1):
                self.rear = 0
                self.front = 0
                self.queue[self.rear] = data

            else:
                self.rear = (self.rear + 1) % self.size
                self.queue[self.rear] = data

    def DeQueue(self):
        if(self.rear == -1):
            print("Queue is empty")
            return -1
        else:
            if(self.rear == self.front):
                temp = self.queue[self.front]
                self.front = -1
                self.rear = -1
                return temp
            else:
                temp = self.queue[self.front]
                self.front = (self.front + 1) % self.size
                return temp
            
    def display(self):
        self.temp = self.front
        while(self.temp != self.rear):
            print(self.queue[self.temp], end = " ")
            self.temp = (self.temp + 1) % self.size
        print()

obj = CircularQueue(9);
obj.EnQueue(12)
obj.EnQueue(5)
obj.EnQueue(3)
obj.EnQueue(12)
obj.EnQueue(15)
obj.EnQueue(6)
obj.EnQueue(7)
obj.EnQueue(9)
obj.EnQueue(11)

obj.display()