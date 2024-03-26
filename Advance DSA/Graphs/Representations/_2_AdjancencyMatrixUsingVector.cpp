// Comment

#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(vector<vector<int>>);

int main()
{
    cout<<endl;
    //Code Start
    
    int nodes, edges;
    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(nodes + 1, vector<int>(nodes + 1, 0));

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

    displayMatrix(adj);
    
    
    //Code End
    cout<<endl;
    return 0;
}

void displayMatrix(vector<vector<int>> vect)
{
    cout << endl << "Printing Adjacency Matrix" << endl;
    for(int i = 0; i < vect.size(); i++)
    {
        for(int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
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