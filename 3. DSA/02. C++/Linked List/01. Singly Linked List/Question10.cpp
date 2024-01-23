// Middle of the Linked List

#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this -> data = data;
        next = NULL;
    }
};

class Solution {
public:
    //? Count total number of nodes in linked list
    int countNodes(ListNode *temp) {
        int count = 0;
        while(temp != NULL)
        {
            temp = temp -> next;
            count++;
        }

        return count;
    }

    //? Create Linked List
    ListNode * createLL(int *arr, int index, int size)
    {
        // Base Condition
        if(index == size)
            return NULL;

        // Recursive Call
        ListNode *temp = new ListNode(arr[index]);
        temp -> next = createLL(arr, index + 1, size);
        return temp;
    }

    //? Middle of LL (Method 1)
    ListNode* middleNode1(ListNode* head) {
        int count = countNodes(head) / 2;

        ListNode *middle = head;
        while(count--)
        {
            middle = middle -> next;
        }

        return middle;
    }

    //? Middle of LL (Method 2)
    ListNode* middleNode2(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if(head == NULL)
            return NULL;

        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }

    //? Displaying Linked List
    void displayList(ListNode *read)
    {
        cout << "Linked List: ";
        while(read != NULL)
        {
            cout << read -> data << " ";
            read = read -> next;
        }

        cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    ListNode* head = NULL;

    Solution obj;
    head = obj.createLL(A, 0, 6);

    obj.displayList(head);

    ListNode *result = NULL;

    // result = obj.middleNode1(head);
    result = obj.middleNode2(head);
    
    cout << "Middle Node: " << result -> data << endl;
}