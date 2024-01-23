// Palindrome Linked List

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    int countNodes(ListNode* temp)
    {
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp -> next;
        }

        return count;
    }

    ListNode* reverseList(ListNode* head)
    {
        if(head == NULL || head -> next == NULL)
            return head;

        ListNode* prev = NULL, *curr = head, *future = head -> next;

        while(curr)
        {
            curr -> next = prev;
            prev = curr;
            curr = future;
            if(future) future = future -> next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL or head -> next == NULL)
            return true;
            
        int midIndex = countNodes(head) / 2;

        ListNode *prev = NULL, *curr = head;
        while(midIndex--)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = NULL;
        prev = head;

        curr = reverseList(curr);

        while(prev)
        {
            if(prev -> val != curr -> val)
                return false;
            
            prev = prev -> next;
            curr = curr -> next;
        }

        return true;
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
        cout << read -> val << " ";
        read = read -> next;
    }

    cout << endl;
}

int main()
{
    int A[4] = {1, 2, 2, 1};

    ListNode* head = NULL;
    head = createLL(A, 0, 4);

    displayList(head);

    Solution obj;

    bool result = obj.isPalindrome(head);
    
    if(result)
        cout << "List is palindrome";
    else    
        cout << "List is not palindrome";
}