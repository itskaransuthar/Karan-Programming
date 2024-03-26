#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    
    int data;
    Node *left, *right;

    Node (int data)
    {
        this -> data = data;
        left = right = NULL;
    }
};

// Function(s) Declaration
Node *insertRecursive(Node *, int);
Node *insertIterative(Node *, int);
bool search(Node *, int);
void display(Node *);
void inorder(Node *);
Node *deleteNode(Node *, int);

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
    
    root = deleteNode(root, 18);

    cout << "Displaying Tree: ";
    inorder(root);
    cout << endl;
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

Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(!root)
        return NULL;
        
    if(root -> data == X)
    {
        // Zero Child Node
        if(!root -> left and !root -> right)
        {
            delete root;
            return NULL;
        }
        
        // One Child Node (Left Child Exist)
        else if(!root -> right)
        {
            Node *temp = root -> left;
            delete root;
            return temp;
        }
        
        // One Child Node (Right Child Exist)
        else if(!root -> left)
        {
            Node *temp = root -> right;
            delete root; 
            return temp;
        }
        
        // Two Child Node
        else 
        {
            Node *parent = root;
            Node *child = root -> left;
            
            while(child -> right)
            {
                parent = child;
                child = child -> right;
            }
            
            int maxElement = child -> data;
            
            if(root != parent)
                parent -> right = child -> left;
            else
                parent -> left = child -> left;
                
            /*
            child -> left = root -> left;
            child -> right = root -> right;
            
            delete root;
            
            return child;
            */
           
            delete child;
            root -> data = maxElement;
            
            return root;
        }
    }
    
    if(X < root -> data)
        root -> left = deleteNode(root -> left, X);
    else if(X > root -> data)
        root -> right = deleteNode(root -> right, X);
        
    return root;
}