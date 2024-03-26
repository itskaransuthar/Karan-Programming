class graph:
    def __init__(self) -> None:
        self.vertices=[]
        self.graph_mat=[]

    def add_vertices(self,val):
        self.vertices.append(val)
        self.graph_mat.append([0]*(len(self.vertices)-1))
        for i in self.graph_mat:
            i.append(0)
    def add_edge(self,val1,val2,weight):
        index1=None
        index2=None
        for i in range(len(self.vertices)):
            if index1==None and self.vertices[i]==val1:
                index1=i+1
            if index2==None and self.vertices[i]==val2:
                index2=i+1
        if index1 and index2:
            self.graph_mat[index1-1][index2-1]=self.graph_mat[index2-1][index1-1]=weight
            return
        print('No such vertices present')
    
    def delete_vertices(self,val):
        index=None
        for i in range(len(self.vertices)):
            if self.vertices[i] == val:
                index=i
        # print(index)
        for j in self.graph_mat:
            j.pop(index)
        self.graph_mat.pop(index)
        self.vertices.pop(index)

            

graph1=graph()
graph1.add_vertices('A')
graph1.add_vertices('B')
graph1.add_vertices('C')
graph1.add_vertices('D')
# print(graph1.vertices)
# print(graph1.graph_mat)
graph1.add_edge('B','C',4)
graph1.add_edge('A','B',3)               
graph1.add_edge('A','C',7)
graph1.add_edge('C','D',5)
print(graph1.graph_mat)
graph1.delete_vertices('A')
print(graph1.graph_mat)
graph1.add_vertices('A')
graph1.add_edge('A','B',3)
graph1.add_edge('A','C',7)
print(graph1.graph_mat)