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

    // Method(s) Declaration
    Node * createTree(Node *);
    void displayTree(Node *);
    
    //* Method 1
    vector<int> leftView1(Node *);

    //* Method 2
    int height(Node *);
    void leftView2Recursive(Node *, vector<int> &, int);
    vector<int> leftView2(Node *);
};

int main()
{
    Node * root = NULL;
    root = root -> createTree(root);

    // root -> displayTree(root);

    // vector<int> answer = root -> leftView1(root);
    vector<int> answer = root -> leftView2(root);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}

Node * Node::createTree(Node * root)
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

    return root;
}

void Node::displayTree(Node * root)
{
    if(!root)
        return;

    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp -> data << " ";

        if(temp -> left) q.push(temp -> left);
        if(temp -> right) q.push(temp -> right);
    }

    return;
}

//* Method 1
vector<int> Node::leftView1(Node *root)
{
    vector<int> answer;

    if(!root)
        return answer;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        answer.push_back(q.front() -> data);
        int n = q.size();

        while(n--)
        {
            Node * temp = q.front();
            q.pop();

            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
        }
    }
    
    return answer;
}

//* Method 2
int Node::height(Node * root)
{
    if(!root)
        return 0;

    return max(height(root -> left), height(root -> right)) + 1;
}

void Node::leftView2Recursive(Node * root, vector<int> &answer, int level)
{
    if(!root)
        return;

    if(answer[level] == 0)
        answer[level] = root -> data;

    leftView2Recursive(root -> left, answer, level + 1);
    leftView2Recursive(root -> right, answer, level + 1);

    return;
}

vector<int> Node::leftView2(Node *root)
{
    vector<int> answer(height(root), 0);

    leftView2Recursive(root, answer, 0);

    return answer;
}

/*
INPUT:
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
1 2 4 12 13 14
*/