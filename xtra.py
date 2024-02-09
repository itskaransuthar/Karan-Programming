class BinaryTree:
  def __init__(self, size):
    self.lst = [None] * size
    
  def insertRoot(self, data):
    if(not self.lst[0]):
      self.lst[0] = data
    else:
      print("Root node is already present")
    
  def insertLeftChild(self, data, parentIndex):
    if(self.lst[parentIndex]):
      if(self.lst[2*parentIndex + 1] != None):
        print("Left child node is already present")
      else:
        self.lst[2*parentIndex + 1] = data
    else:
      print("Parent node is absent")

  def insertRightChild(self, data, parentIndex):
    if(self.lst[parentIndex]):
      if(self.lst[2*parentIndex + 2] == None):
        self.lst[2*parentIndex + 2] = data
      else:
        print("Right child node is already present")
    else:
      print("Parent node is absent")

  def display(self):
    print(self.lst)

  def displayTree(self):
    for i in range(len(self.lst)):
      if(self.lst[i] == None):
        print('-', sep=" ", end = " ")
      else:
        print(self.lst[i], sep = " ", end = " ")
    
    print()
    
obj = BinaryTree(7)

obj.displayTree()

obj.insertRoot(1)

obj.insertLeftChild(8, 0)
obj.insertLeftChild(8, 0)
obj.insertRightChild(9, 0)
obj.insertRightChild(9, 0)

# obj.display();
obj.displayTree()