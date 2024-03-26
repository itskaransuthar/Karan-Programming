// Comment

#include <iostream>
using namespace std;

void displayMatrix(int**, int);

int main()
{
    cout<<endl;
    //Code Start
    
    int nodes, edges;
    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    int** adj = new int*[nodes + 1];
    for(int i = 0; i < nodes + 1; i++)
    {
        adj[i] = new int[nodes + 1];
    }

    for(int i = 0; i < nodes + 1; i++)
    {
        for(int j = 0; j < nodes + 1; j++)
        {
            adj[i][j] = 0;
        }
    }

    bool direction;
    cout << endl << "Graph is directed(1) or undirected(0): ";
    cin >> direction;

    // If graph is undirected
    if(direction == false)
    {
        cout << endl;
        for(int i = 0; i < edges; i++)
        {
            int x, y;
            cout << "Enter coordinates: ";
            cin >> x >> y;

            adj[x][y] = 1;
            adj[y][x] = 1;
        }
    }

    // If graph is directed
    else
    {
        cout << endl;
        for(int i = 0; i < edges; i++)
        {
            int x, y;
            cout << "Enter coordinates: ";
            cin >> x >> y;

            adj[x][y] = 1;
        }
    }

    displayMatrix(adj, nodes);
    
    //Code End
    cout<<endl;
    return 0;
}

void displayMatrix(int** arr, int n)
{
    cout << endl << "Printing Adjacency Matrix" << endl;
    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j < n + 1; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

/*
INPUT:
4 
5
0
1 2
2 3
3 4
4 1
2 4

OUTPUT:
Printing Adjacency Matrix
0 0 0 0 0 
0 0 1 0 1 
0 1 0 1 1 
0 0 1 0 1 
0 1 1 1 0 
*/