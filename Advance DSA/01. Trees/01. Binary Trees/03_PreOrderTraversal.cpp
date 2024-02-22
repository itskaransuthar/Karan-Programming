#include <iostream>
#include <queue>
using namespace std;

class Node {
    Node * left;
    int data;
    Node * right;

public:
    Node(int data) 
    {
        this -> data = data;
        left = right = NULL;
    }

    // Level Order Traversal
    Node * createTree();
    void displayBinaryTree(Node *);

    // Pre Order Traversal (DLR)
    void preOrderTraversal(Node * root)
    {
        // Base Condition
        if(root == NULL)
            return;

        // Recursion
        cout << root -> data << " ";
        preOrderTraversal(root -> left);
        preOrderTraversal(root -> right);

        return;
    }
};

// Using Level Order Traversal
Node * Node :: createTree()
{
    Node * root = NULL;
    queue<Node *> q;

    int data;
    cin >> data;

    if(data != -1)
    {
        root = new Node(data);
        q.push(root);
    }
    
    while(!q.empty())
    {
        Node * temp = q.front();
        q.pop();

        int leftData, rightData;
        cin >> leftData >> rightData;

        if(leftData != -1)
        {
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        if(rightData != -1)
        {
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }

    return root;
}

// Displaying binary tree using level order traversal
void Node :: displayBinaryTree(Node * root)
{
    if(root == NULL)
        return;

    cout << "Level Order Traversal: ";

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
    return;
}

// Main Function
int main()
{
    Node * root = NULL;
    root = root -> createTree();

    cout << "Pre Order Traversal: ";
    root -> preOrderTraversal(root);
    cout << endl;

    root -> displayBinaryTree(root);
}

/*
INPUT:
10 20 30 40 50 60 70 -1 -1 80 90 -1 100 -1 -1 -1 110 120 -1 -1 -1 -1 -1 -1 -1

OUTPUT:
Pre Order Traversal: 10 20 40 50 80 110 90 120 30 60 100 70 
Level Order Traversal: 10 20 30 40 50 60 70 80 90 100 110 120
*/