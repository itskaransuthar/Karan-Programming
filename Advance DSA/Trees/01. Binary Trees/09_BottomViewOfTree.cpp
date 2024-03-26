#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <climits>
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
    void find(Node *, int &, int &, int);
    vector<int> bottomView1(Node *);
    void bottomView2Recursive(Node *, vector<int> &, vector<int> &, int, int);
    vector<int> bottomView2(Node *);
};

int main()
{
    Node *root = NULL;

    root = root -> createTree(root);
    // root -> displayTree(root);

    // vector<int> answer = root -> bottomView1(root);
    vector<int> answer = root -> bottomView2(root);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
}

Node * Node::createTree(Node *root)
{
    int value;
    cin >> value;

    if(value == -1)
        return NULL;

    queue<Node *> q;

    root = new Node(value);
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

void Node::displayTree(Node *root)
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

    return;
}

//* Method 1
void Node::find(Node *root, int &leftMost, int &rightMost, int position)
{
    if(!root)
        return;

    leftMost = min(leftMost, position);
    rightMost = max(rightMost, position);

    find(root -> left, leftMost, rightMost, position - 1);
    find(root -> right, leftMost, rightMost, position + 1);

    return;
}

vector<int> Node::bottomView1(Node *root)
{
    int leftMost = 0, rightMost = 0;
    find(root, leftMost, rightMost, 0);

    vector<int> answer(rightMost - leftMost + 1);

    if(!root)
        return answer;

    queue<Node *> q;
    queue<int> index;

    q.push(root);
    index.push(-1 * leftMost);

    while(!q.empty())
    {
        Node *temp = q.front();
        int i = index.front();

        answer[i] = temp -> data;

        q.pop();
        index.pop();

        if(temp -> left)
        {
            q.push(temp -> left);
            index.push(i - 1);
        }

        if(temp -> right)
        {
            q.push(temp -> right);
            index.push(i + 1);
        }
    }

    return answer;
}

void Node::bottomView2Recursive(Node *root, vector<int> &answer, vector<int> &level, int index, int l)
{
    if(!root)
        return;

    if(l >= level[index])
    {
        level[index] = l;
        answer[index] = root -> data;
    }

    bottomView2Recursive(root -> left, answer, level, index - 1, l + 1);
    bottomView2Recursive(root -> right, answer, level, index + 1, l + 1);

    return;
}

vector<int> Node::bottomView2(Node *root)
{
    int leftMost = 0, rightMost = 0;
    find(root, leftMost, rightMost, 0);

    vector<int> answer(rightMost - leftMost + 1);
    vector<int> level(rightMost - leftMost + 1, INT_MIN);

    bottomView2Recursive(root, answer, level, -1 * leftMost, 0);

    return answer;
}

/*
INPUT:
1 2 3 4 5 6 7 -1 -1 12 -1 8 9 -1 -1 13 -1 -1 -1 -1 10 14 -1 -1 11 -1 -1 -1 -1

OUTPUT:
14 13 8 6 9 10 11
*/