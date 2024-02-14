class Node:
   def __init__(self, data):
      self.left = None
      self.right = None
      self.data = data

   def insert(self, data):
# Compare the new value with the parent node
      if self.data:
         if data < self.data:
            if self.left is None:
               self.left = Node(data)
            else:
               self.left.insert(data)
         elif data > self.data:
               if self.right is None:
                  self.right = Node(data)
               else:
                  self.right.insert(data)
      else:
         self.data = data

# Print the tree
   def PrintTree(self):
      if self.left:
         self.left.PrintTree()
      print(self.data, end = " ", sep = " ")
      if self.right:
         self.right.PrintTree()

class Solution:
    def __init__(self):
      ...

    def countNodes(self, root):
       if(root == None):
          return 0
       
       left = self.countNodes(root.left)
       right = self.countNodes(root.right)

       return left + right + 1
    
    def countDegreeTwoNodes(self, root, count):
        if(root == None):
          return count
        
        if(root.left and root.right):
           return 1 + self.countDegreeTwoNodes(root.left, count) + self.countDegreeTwoNodes(root.right, count)
        
        return count
    
    def countDegreeZeroNodes(self, root, count):
        if(root == None):
          return count
        
        if(root.left == None and root.right == None):
           count = 1 + self.countDegreeZeroNodes(root.left, count) + self.countDegreeZeroNodes(root.right, count)

        return 0 + self.countDegreeZeroNodes(root.left, count) + self.countDegreeZeroNodes(root.right, count)

# Use the insert method to add nodes
root = Node(12)
root.insert(6)
root.insert(7)
root.insert(14)
root.insert(3)
root.PrintTree()

obj = Solution()
print()
print(obj.countNodes(root))
print(obj.countDegreeTwoNodes(root, 0))
print(obj.countDegreeZeroNodes(root, 0))

