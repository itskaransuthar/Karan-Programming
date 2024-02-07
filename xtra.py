class Queue:
    def __init__(self):
        self.queue = [];
    
    def EnQueue(self, item):
        self.queue.append(item);
    
    def DeQueue(self):
        if(len(self.queue)):
            return self.queue.pop(0);
        else:
            print("Queue is empty");
            return -1;


    def isEmpty(self):
        return len(self.queue) == 0;

    def size(self):
        return self.length();

    def display(self):
        print(self.queue);

obj = Queue();

obj.EnQueue(45);
obj.EnQueue(55);
obj.DeQueue();
obj.DeQueue();
obj.EnQueue(10);
obj.EnQueue(20);
obj.EnQueue(30);
obj.EnQueue(40);
obj.EnQueue(50);

obj.display();
