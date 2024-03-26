#include <iostream>
using namespace std;

class Node {
    public: 

    int data;
    Node *left, *right;
    int height;

    Node (int val)
    {
        data = val;
        left = right = NULL;
        height = 1;
    }
};

int getHeight(Node *node)
{
    if(!node)
        return 0;

    // No need to calculate height because it is already in the node data structure
    return node -> height;
}

int getBalance(Node *node)
{
    return getHeight(node -> left) - getHeight(node -> right);
}

// Right Rotation
Node *rotateRight(Node *node)
{
    Node *temp = node -> left;
    node -> left = temp -> right;
    temp -> right = node;

    // Update the heights
    node -> height = 1 + max(getHeight(node -> left), getHeight(node -> right));
    temp -> height = 1 + max(getHeight(temp -> left), getHeight(temp -> right));

    return temp;
}

// Left Rotation
Node *rotateLeft(Node *node)
{
    Node *temp = node -> right;
    node -> right = temp -> left;
    temp -> left = node;

    // Update the heights
    node -> height = 1 + max(getHeight(node -> left), getHeight(node -> right));
    temp -> height = 1 + max(getHeight(temp -> left), getHeight(temp -> right));

    return temp;
}

Node *insert(Node *root, int key)
{
    if(!root)
        return new Node(key);

    // Inserting key to it's appropriate place
    if(key < root -> data)
        root -> left = insert(root -> left, key);
    else if(key > root -> data)
        root -> right = insert(root -> right, key);
    else // No duplicate element to be inserted
        return root;

    // Updating height of ancestors
    root -> height = 1 + max(getHeight(root -> left), getHeight(root -> right));

    // Checking if tree is balanced or not
    int balance = getBalance(root);

    // Tree is unbalanced from left side
    if(balance > 1)
    {
        // Left Left Case
        if(key < root -> left -> data)
        {
            return rotateRight(root);
        }

        // Left Right Case
        else if(key > root -> left -> data)
        {
            root -> left = rotateLeft(root -> left);
            return rotateRight(root);
        }
    }

    // Tree is unbalanced from right side
    else if(balance < -1)
    {
        // Right Right Case
        if(key > root -> right -> data)
        {
            return rotateLeft(root);
        }

        // Right Left Case
        if(key < root -> right -> data)
        {
            root -> right = rotateRight(root -> right);
            return rotateLeft(root);
        }
    }

    // Tree is balanced
    return root;
}

// Inorder Traversal
void display(Node *root)
{
    if(!root)
        return;

    display(root -> left);
    cout << root -> data << " ";
    display(root -> right);

    return;
}

int main()
{
    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 60);
    root = insert(root, 70);

    display(root);
}