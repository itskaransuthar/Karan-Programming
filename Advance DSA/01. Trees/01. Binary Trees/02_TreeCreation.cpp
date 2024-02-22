#include <iostream>
#include <queue>
using namespace std;

class Node {
    Node *left;
    int data;
    Node *right;

public:
    Node (int data)
    {
        this -> data = data;
        left = right = NULL;
    }

    Node * treeCreation()
    {
        int value;
        cin >> value;

        // Base Condition
        if(value == -1)
            return NULL;

        // Recursion
        Node * temp = new Node(value);
        temp -> left = treeCreation();
        temp -> right = treeCreation();

        return temp;
    }

    void displayTree1(Node * root)
    {
        cout << "Level Order Traversal: ";
        if(root != NULL)
        {
            queue<Node *> q;

            q.push(root);

            while(!q.empty())
            {
                Node * temp = q.front();
                q.pop();

                cout << temp -> data << " ";

                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }

            cout << endl;
        }
    }

    void displayTree2(Node * temp)
    {
        if(temp == NULL)
            return;

        cout << temp -> data << " ";

        displayTree2(temp -> left);
        displayTree2(temp -> right);

        return;
    }
};

int main()
{
    Node * root = NULL;

    root = root -> treeCreation();
    root -> displayTree1(root);

    cout << "Tree Traversal: ";
    root -> displayTree2(root);
}

/*
INPUT:
10 20 40 -1 -1 50 80 -1 -1 90 110 -1 -1 -1 30 60 -1 -1 70 -1 100 -1 -1

OUTPUT:
Level Order Traversal: 10 20 30 40 50 60 70 80 90 100 110 
Tree Traversal: 10 20 40 50 80 90 110 30 60 70 100
*/