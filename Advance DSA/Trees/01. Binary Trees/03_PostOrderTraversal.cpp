#include <iostream>
#include <queue> 
#include <stack>
#include <vector>
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
    void postOrderTraversalRecursive(Node *);
    void postOrderTraversalIterative(Node *);
};

int main()
{
    Node *root = NULL;

    root = root -> createTree(root);

    // root -> displayTree(root);
    // root -> postOrderTraversalRecursive(root);
    root -> postOrderTraversalIterative(root);
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

// Displaying tree using depth first traversal (post order traversal)
// Using Recursion
void Node::postOrderTraversalRecursive(Node *root)
{
    if(!root)
        return;

    if(root -> left) postOrderTraversalRecursive(root -> left);
    if(root -> right) postOrderTraversalRecursive(root -> right);

    cout << root -> data << " ";

    return;
}

// Using Iteration
void Node::postOrderTraversalIterative(Node *root)
{
    if(!root)
        return;

    stack<Node *> st;
    vector<int> v;

    st.push(root);

    while(!st.empty())
    {
        Node * temp = st.top();
        v.push_back(temp -> data);

        st.pop();

        if(temp -> left) st.push(temp -> left);
        if(temp -> right) st.push(temp -> right);
    }

    int start = 0, end = v.size() - 1;
    while(start < end)
    {
        int tempVariable = v[start];
        v[start] = v[end];
        v[end] = tempVariable;

        start++;
        end--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

/*
INPUT: 
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
4 14 13 12 5 2 8 11 10 9 6 7 3 1
*/