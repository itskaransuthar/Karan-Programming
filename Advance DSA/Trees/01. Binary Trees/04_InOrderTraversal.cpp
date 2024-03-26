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
    void inOrderTraversalRecursive(Node *);
    void inOrderTraversalIterative(Node *);
};

int main()
{
    Node *root = NULL;

    root = root -> createTree(root);

    // root -> displayTree(root);
    // root -> inOrderTraversalRecursive(root);
    root -> inOrderTraversalIterative(root);
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

// Displaying tree using depth first traversal (in order traversal)
// Using Recursion
void Node::inOrderTraversalRecursive(Node *root)
{
    if(!root)
        return;

    if(root -> left) inOrderTraversalRecursive(root -> left);
    cout << root -> data << " ";
    if(root -> right) inOrderTraversalRecursive(root -> right);

    return;
}

// Using Iteration
void Node::inOrderTraversalIterative(Node *root)
{
    if(!root)
        return;

    stack<Node *> st;
    stack<int> visited; // If node is visited second time 

    st.push(root);
    visited.push(0);

    while(!st.empty())
    {
        Node *temp = st.top();
        st.pop();

        if(visited.top() == 0)
        {
            visited.pop();

            if(temp -> right)
            {
                st.push(temp -> right);
                visited.push(0);
            }

            st.push(temp);
            visited.push(1);

            if(temp -> left)
            {
                st.push(temp -> left);
                visited.push(0);
            }
        }

        else
        {
            visited.pop();
            cout << temp -> data << " ";
        }
    }
}

/*
INPUT: 
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
4 2 14 13 12 5 1 8 6 9 10 11 3 7
*/