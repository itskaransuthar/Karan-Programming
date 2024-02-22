// Tree Creation Using Level Order Traversal

#include <iostream>
#include <queue>
using namespace std;

class Node 
{
public:
    Node * left;
    int data;
    Node * right;

    Node (int data)
    {
        left = right = NULL;
        this -> data = data;
    }
};

class BinaryTree {
public:
    // Using Level Order Traversal Create Tree
    struct Node * treeCreation(struct Node * root)
    {
        // Node to be pushed
        queue<Node *> q;

        // Creating Root Node
        int value;
        cin >> value;

        if(value != -1)
        {
            root = new Node(value);
            q.push(root);
        }

        while(!q.empty())
        {
            Node * temp = q.front();
            q.pop();

            int leftValue, rightValue;
            cin >> leftValue >> rightValue;

            if(leftValue != -1)
            {
                temp -> left = new Node(leftValue);
                q.push(temp -> left);
            }

            if(rightValue != -1)
            {
                temp -> right = new Node(rightValue);
                q.push(temp -> right);
            }
        }

        return root;
    }

    // Print Binary Tree Using Level Order Traversal
    void displayBinaryTree(Node * root)
    {
        cout << "\nLevel Order Traversal" << endl;

        queue<Node *> q;

        if(root != NULL)
            q.push(root);

        while(!q.empty())
        {
            Node * temp = q.front();
            q.pop();

            // Printing Node's Data
            cout << temp -> data << " ";
            
            if(temp -> left) q.push(temp -> left); 
            if(temp -> right) q.push(temp -> right);
        }
    }
};

int main()
{
    Node *root = NULL;
    BinaryTree obj = BinaryTree();

    root = obj.treeCreation(root);
    obj.displayBinaryTree(root);
}

/*
INPUT:
10 20 30 40 50 60 70 -1 -1 80 90 -1 -1 -1 100 -1 -1 110 -1 -1 -1 -1 -1

OUTPUT:
Level Order Traversal
10 20 30 40 50 60 70 80 90 100 110
*/