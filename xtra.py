class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Postfix Evaluation
class Stack:
    def __init__(self):
        self.top = None
        self.head = None
    
    def push(self, data):
        if self.top is None:
            self.top = Node(data)
            self.head = self.top
        else:
            self.top = Node(data)
            self.top.next = self.head
            self.head = self.top
    
    def pop(self):
        if self.head is None:
            return None
        else:
            popped = self.head
            self.head = self.head.next
            popped.next = None
            return popped.data
    
    def postfixEvaluation(self, str):
        for i in range(len(str)):
            if('a' <= str[i] and str[i] <= 'z'):
                self.push(str[i])
            
            else:
                var1 = self.pop()
                var2 = self.pop()

                self.push(var2 + str[i] + var1)

        return self.pop();

'''
#* Postfix to infix
a = 'abc++';
a = 'ab*cdc/a*f+*+';

s = Stack();
ans = s.postfixEvaluation(a);
'''

#* Prefix to infix
a = '+a*bc'
a = a[-1::-1];

s = Stack();
ans = s.postfixEvaluation(a);
ans = ans[-1::-1];

print(ans);