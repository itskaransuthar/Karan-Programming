#include <iostream>
#include <queue>
using namespace std;

class Node {
    int data;
    Node *left, *right;

public:
    Node (int data)
    {
        this -> data = data;
        left = right = NULL;
    }

    // Level Order Traversal
    Node * createTree();
    void displayBinaryTree(Node *);

    void postOrderTraversal(Node * temp)
    {
        if(temp == NULL)
            return;
        
        postOrderTraversal(temp -> left);
        postOrderTraversal(temp -> right);
        cout << temp -> data << " ";

        return;
    }
};

Node * Node :: createTree()
{
    queue<Node *> q;

    int value;
    cin >> value;

    Node * root = new Node(value);
    q.push(root);

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

void Node :: displayBinaryTree(Node * root)
{
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
    return;
}

int main()
{
    Node * root = NULL;

    root = root -> createTree();
    root -> displayBinaryTree(root);

    cout << "Post Order Traversal: ";
    root -> postOrderTraversal(root);
    cout << endl;
}

/*
INPUT:
10 20 30 40 50 60 70 -1 -1 80 90 -1 100 -1 -1 -1 110 120 -1 -1 -1 -1 -1 -1 -1

OUTPUT:
Level Order Traversal: 10 20 30 40 50 60 70 80 90 100 110 120 
Post Order Traversal: 40 110 80 120 90 50 20 100 60 70 30 10
*/