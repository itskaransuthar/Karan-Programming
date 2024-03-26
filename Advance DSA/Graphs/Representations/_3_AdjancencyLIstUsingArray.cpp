// Comment

#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(vector<int> *, int);

int main()
{
    cout<<endl;
    //Code Start
    
    int nodes, edges;

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<int>* adj = new vector<int>[nodes + 1];

    bool direction;
    cout << endl << "Graph is directed(1) or undirected(0): ";
    cin >> direction;
    
    cout << endl;
    if(direction == false)
    {
        for(int i = 0; i < edges; i++)
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
        for(int i = 0; i < edges; i++)
        {
            int x, y;

            cout << "Enter coordinates: ";
            cin >> x >> y;

            adj[x].push_back(y);
        }
    }

    cout << endl << "Printing Matrix" << endl;
    displayMatrix(adj, nodes);
    
    //Code End
    cout<<endl;
    return 0;
}

void displayMatrix(vector<int>* arr, int n)
{
    for(int i = 0; i < n + 1; i++)
    {
        cout << i << "-> ";
        for(auto j: arr[i])
        {
            cout << j << " ";
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