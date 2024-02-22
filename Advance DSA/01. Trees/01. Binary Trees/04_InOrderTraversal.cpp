#include <iostream>
#include <queue>
using namespace std;

class Node {
    int data;
    Node * left, * right;

public:
    Node (int data)
    {
        this -> data = data;
        left = right = NULL;
    }

    Node * createTree();
    void displayBinaryTree(Node *);

    void inOrderTraversal(Node * temp)
    {
        if(temp == NULL)
            return;

        inOrderTraversal(temp -> left);
        cout << temp -> data << " ";
        inOrderTraversal(temp -> right);
    }
};

Node * Node :: createTree()
{
    int value;
    cin >> value;

    // Base Condition
    if(value == -1)
        return NULL;
    
    // Recursion
    Node * temp = new Node(value);
    temp -> left = createTree();
    temp -> right = createTree();

    return temp;
}

// Level Order Traversal
void Node :: displayBinaryTree(Node * root)
{
    if(root == NULL)
        return;

    queue<Node *> q;

    q.push(root);

    cout << "Level Order Traversal: ";
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

int main()
{
    Node * root = NULL;

    root = root -> createTree();
    root -> displayBinaryTree(root);

    cout << "InOrder Traversal: ";
    root -> inOrderTraversal(root);
    cout << endl;
}

/*
INPUT:
10 20 40 -1 -1 50 80 -1 110 -1 -1 90 120 -1 -1 -1 30 60 -1 100 -1 -1 70 -1 -1

OUTPUT:
Level Order Traversal: 10 20 30 40 50 60 70 80 90 100 110 120 
InOrder Traversal: 40 20 80 110 50 120 90 10 60 100 30 70
*/