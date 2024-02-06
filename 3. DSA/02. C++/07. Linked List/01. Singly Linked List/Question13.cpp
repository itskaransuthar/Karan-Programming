// Rotate Linked List

#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;

    ListNode(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    int countNodes(ListNode *read)
    {
        int count = 0;
        while(read != NULL)
        {
            count++;
            read = read -> next;
        }

        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL)
            return head;

        int count = countNodes(head);
        k = k % count;

        if(k == 0)
            return head;
        
        int index = count - k - 1;
        ListNode *temp = head, *tail = head;

        while(tail -> next != NULL)
        {
            if(index)
            {
                temp = temp -> next;
                index--;
            }

            tail = tail -> next;
        }

        ListNode* newHead = temp -> next;
        temp -> next = NULL;
        tail -> next = head;
        head = newHead;

        return head;
    }
};

ListNode * createLL(int *A, int index, int size)
{
    // Base Condition
    if(index == size)
        return NULL;

    // Recursive Call
    ListNode *temp = new ListNode(A[index]);
    temp -> next = createLL(A, index + 1, size);

    return temp;
}

void displayList(ListNode *read)
{
    cout << "Linked List: ";
    while(read)
    {
        cout << read -> data << " ";
        read = read -> next;
    }

    cout << endl;
}

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    ListNode* head = NULL;
    head = createLL(A, 0, 6);

    displayList(head);

    Solution obj;

    head = obj.rotateRight(head, 2);
    displayList(head);
}