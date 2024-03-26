// Comment

#include <iostream>
#include <vector>
using namespace std;

void displayList(vector<int> *, int);
vector<int> dfsOfGraph(vector<int>*, int);
// void depthFirstSearch(vector<int>*, int, int*, vector<int>);

int main()
{
    cout<<endl;
    //Code Start
    
    int nodes, edges;

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<int> adj[nodes + 1];

    cout << endl;
    for(int i = 0; i < edges; i++)
    {
        int x, y;
        cout << "Enter coordinates: ";
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // displayList(adj, nodes);

    vector<int> answer = dfsOfGraph(adj, nodes);
    
    cout << endl << "DFS: ";
    for(auto i = answer.begin(); i < answer.end(); i++)
    {
        cout << *i << " ";
    } cout << endl;
    
    //Code End
    cout<<endl;
    return 0;
}

void depthFirstSearch(vector<int> *adj, int node, int *visited, vector<int> & dfs)
{
    visited[node] = 1;
    dfs.push_back(node);

    for(auto i: adj[node])
    {
        if(visited[i] != 1) // !visited[i]
        {
            depthFirstSearch(adj, i, visited, dfs);
        }
    }
}

vector<int> dfsOfGraph(vector<int> *adj, int nodes)
{
    int visited[nodes + 1] = {0};
    int start = 1; // Starting Node = 1

    vector<int> dfs;

    depthFirstSearch(adj, start, visited, dfs);

    return dfs;
}

void displayList(vector<int> *list, int n)
{
    cout << endl << "Printing List" << endl;
    for(int i = 0; i < n + 1; i++)
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
DFS: 1 2 3 4
*/