#include <iostream>
#include <queue>
using namespace std;

class Node 
{
    public:

    int data;
    Node *left, *right;

    Node(int data)
    {
        this -> data = data;
        left = right = NULL;
    }
};

// Function Declaration(s)
Node *insertRecursive(Node *, int);
Node *insertIterative(Node *, int);
bool search(Node *, int);
void display(Node *);
void inorder(Node *);

int main()
{
    int Arr[10] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    Node *root = NULL;

    for(int i = 0; i < 10; i++)
        // root = insertRecursive(root, Arr[i]);
        root = insertIterative(root, Arr[i]);

    // display(root);
    cout << "Displaying Tree: ";
    inorder(root);
    cout << endl;

    int key = 11;
    if(search(root, key))
        cout << "Element " << key << " is present in BST";
    else
        cout << "Element " << key << " is not present in BST";
}

// Recursive approach to insert an element into the BST
Node *insertRecursive(Node *root, int target)
{
    if(!root)
    {
        root = new Node(target);
        return root;
    }

    if(target < root -> data)
        root -> left = insertRecursive(root -> left, target);
    else
        root -> right = insertRecursive(root -> right, target);

    return root;
}

// Iterative approach to insert an element into the BST
Node *insertIterative(Node *node, int target)
{
    if(!node)
    {
        node = new Node(target);
        return node;
    }

    Node *root = node;
    Node *temp = NULL;

    while(node) {
        if(target < node -> data)
        {
            temp = node;
            node = node -> left;
        }

        else
        {
            temp = node;
            node = node -> right;
        }
    }

    if(target < temp -> data)
        temp -> left = new Node(target);
    else
        temp -> right = new Node(target);

    return root;
}

bool search(Node* root, int x) {
    // Your code here
    if(!root)
        return false;
        
    if(root -> data == x)
        return true;
    
    if(x < root -> data)
        return search(root -> left, x);
    else
        return search(root -> right, x);
}

void display(Node *node)
{
    if(!node)
        return;

    queue<Node *> q;

    q.push(node);

    cout << "Displaying BST: ";
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp -> data << " ";

        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }
}

void inorder(Node *root)
{
    if(!root)
        return;

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);

    return;
}