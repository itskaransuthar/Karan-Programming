#include <iostream>
#include <queue>
using namespace std;

class Node {
    int data;
    Node *left, *right;

public:
    Node(int data)
    {
        this -> data = data;
        left = right = NULL;
    }

    // METHOD 1: Level Order Traversal
    Node * createTree()
    {
        int value;
        cin >> value;

        if(value == -1) 
            return NULL;

        Node * root = new Node(value);

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

    void levelOrderTraversal(Node *root)
    {
        if(!root)   
            return;

        queue<Node *> q;

        q.push(root);   

        while(!q.empty())
        {
            int n = q.size();

            while(n)
            {
                Node * temp = q.front();
                q.pop();

                cout << temp -> data << " ";

                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);

                n--;
            }

            cout << endl;
        }     
    }
};

int main()
{
    Node * root = NULL;

    root = root -> createTree();

    root -> levelOrderTraversal(root);
}