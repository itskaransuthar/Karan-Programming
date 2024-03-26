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
    void displayTree(Node *);
    void preOrderTraversalRecursive(Node *);
    void preOrderTraversalIterative(Node *);
};

int main()
{
    Node *root = NULL;

    root = root -> createTree(root);

    // root -> displayTree(root);
    // root -> preOrderTraversalRecursive(root);
    root -> preOrderTraversalIterative(root);
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
void Node::displayTree(Node * root)
{
    if(!root)
        return;

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
}

// Displaying tree using depth first traversal (pre order traversal)
// Using Recursion
void Node::preOrderTraversalRecursive(Node *root)
{
    if(!root)
        return;

    cout << root -> data << " ";

    if(root -> left) preOrderTraversalRecursive(root -> left);
    if(root -> right) preOrderTraversalRecursive(root -> right);

    return;
}

// Using Iteration
void Node::preOrderTraversalIterative(Node *root)
{
    if(!root)
        return;

    stack<Node *> st;

    st.push(root);

    while(!st.empty())
    {
        Node * temp = st.top();
        st.pop();

        cout << temp -> data << " ";

        if(temp -> right) st.push(temp -> right);
        if(temp -> left) st.push(temp -> left);
    }

    return;
}

/*
INPUT: 
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
1 2 4 5 12 13 14 3 6 8 9 10 11 7
*/