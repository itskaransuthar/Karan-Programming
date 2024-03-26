#include <iostream>
#include <queue>
using namespace std;

class Node 
{
    int data;
    Node *left;
    Node *right;

    public:

    Node (int data)
    {
        this -> data = data;
        left = right = NULL;
    }

    // Method(s) Declaration
    Node * createTree1(Node *); // Creating binary tree using breath first traversal
    Node * createTree2(Node *); // Creating binary tree using depth first traversal
    void display1(Node *);
    void display2(Node *);
};

//* --------------------------------- *//
int main()
{
    Node * root = NULL;
    root = root -> createTree2(root);

    cout << "Displaying tree using level order traversal: ";
    root -> display1(root);
    cout << endl;

    cout << "Displaying tree using pre order traversal: ";
    root -> display2(root);
    cout << endl;
}
//* --------------------------------- *//

// Creating tree using breath first traversal (level order traversal)
Node * Node::createTree1(Node * root)
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
        Node *temp = q.front();
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

    cout << endl;

    return root;
}

// Creating tree using depth first traversal
Node * Node::createTree2(Node * root)
{
    int value;
    cin >> value;

    // Base Condition
    if(value == -1)
        return NULL;

    // Recursion
    root = new Node(value);

    root -> left = createTree2(root -> left);
    root -> right = createTree2(root -> right);

    return root;
}

// Displaying tree using breath first traversal (level order traversal)
void Node::display1(Node * node)
{
    if(!node)
        return;

    queue<Node *> q;
    q.push(node);

    while(!q.empty())
    {
        Node * temp = q.front();
        q.pop(); 

        cout << temp -> data << " ";

        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }

    return;
}

// Displaying tree using depth first traversal (pre order traversal)
void Node::display2(Node * node)
{
    if(!node)
        return;

    cout << node -> data << " ";

    display2(node -> left);
    display2(node -> right);

    return;
}

/*
? Breadth First Traversal (Method 1)
INPUT: 
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
Displaying tree using level order traversal: 1 2 3 4 5 6 7 12 8 9 13 10 14 
*/

/*
? Depth First Traversal (Method 2)
INPUT: 
1 2 4 -1 -1 5 12 13 14 -1 -1 -1 -1 -1 3 6 8 -1 -1 9 -1 10 -1 11 -1 -1 7 -1 -1

OUTPUT:
Displaying tree using pre order traversal: 1 2 4 5 12 13 14 3 6 8 9 10 11 7
*/