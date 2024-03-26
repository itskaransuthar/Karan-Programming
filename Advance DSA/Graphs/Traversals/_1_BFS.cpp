// Comment

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void displayList(vector<int>*, int);
vector<int> bfsOfGraph(int, vector<int>*);

int main()
{
    cout<<endl;
    //Code Start
    
    int nodes,  edges;

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<int>* adj = new vector<int>[nodes + 1];
    
    cout << endl;
    
    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cout << "Enter coordinates: ";
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // displayList(adj, nodes + 1);

    vector<int> answer = bfsOfGraph(nodes, adj);
    /*
        Steps to remember: 
        1. Push into stack 
        2. Modify Visited array
        3. Push into Answer Vector (bfs) 
    */
    
    cout << endl << "BFS: ";
    for(int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    } cout << endl;
    
    //Code End
    cout<<endl;
    return 0;
}

vector<int> bfsOfGraph(int V, vector<int> adj[]) // V = number of nodes
{
    queue<int> q;

    int start = 1; // Starting Node = 1;
    q.push(start);

    int visited[V + 1] = {0};
    visited[q.front()] = 1; // q.front() = 1

    vector<int> bfs; // Answer
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for(auto i: adj[node])
        {
            if(visited[i] != 1)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    return bfs;
}

void displayList(vector<int>* list, int n)
{
    cout << endl << "Printing List" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << i << "-> ";
        for(auto j: list[i])
        {
            cout << j << " ";
        } cout << endl;
    }
}

/*
INPUT:
4 
5

1 2
2 3
3 4
4 1
2 4

OUTPUT:
BFS: 1 2 4 3 
*/