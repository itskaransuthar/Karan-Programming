#include <iostream>
#include <queue> 
#include <stack>
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

    // Method(s) declaration
    Node * createTree(Node *);
    void levelOrderTraversal(Node *);
};

int main()
{
    Node *root = NULL;

    root = root -> createTree(root);

    root -> levelOrderTraversal(root);
}

// Creating tree using breath first traversal (level order traversal)
Node * Node::createTree(Node *root)
{
    int value;
    cin >> value;

    if(value == -1)
        return NULL;

    root = new Node(value);

    queue<Node *> q;
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

// Displaying tree using breath first traversal (level order traversal)
void Node::levelOrderTraversal(Node * root)
{
    if(!root)
        return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        while(n--)
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

/*
INPUT: 
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
1 
2 3 
4 5 6 7 
12 8 9 
13 10 
14 11
*/