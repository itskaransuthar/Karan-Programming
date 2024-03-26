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

    vector<vector<int>> adj(nodes + 1);

    bool direction; 
    cout << endl << "Graph is directed(1) or undirected(0): ";
    cin >> direction;

    cout << endl;
    if(direction == false)
    {
        for(int i = 0; i < adj.size(); i++)
        {
            int x, y;
            cout << "Enter coordinates: ";
            cin >> x >> y;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }

    else 
    {
        for(int i = 0; i < adj.size(); i++)
        {
            int x, y;
            cout << "Enter coordinates: ";
            cin >> x >> y;

            adj[x].push_back(y);
        }
    }

    cout << endl << "Printing Matrix" << endl;
    displayMatrix(adj);
    
    //Code End
    cout<<endl;
    return 0;
}

void displayMatrix(vector<vector<int>> vect)
{
    for(int i = 0; i < vect.size(); i++)
    {
        cout << i << "-> ";
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
Printing Matrix
0-> 
1-> 2 4 
2-> 1 3 4 
3-> 2 4 
4-> 3 1 2
*/