// Remove Nth Node from End of List

#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data)
    {
        this -> data = data;
        next = NULL;
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

    //? Count total number of nodes in linked list
    int countNodes(ListNode* read) {
        int count = 0;
        while(read)
        {
            count++;
            read = read -> next;
        }

        return count;
    }

    //? Remove Nth Node from End of List
    ListNode* removeNthFromEnd(ListNode* head, int n) {            
        int index = countNodes(head) - n;

        if(index == 0)
        {
            ListNode* curr = head;
            head = head -> next;

            delete curr;
            curr = NULL;

            return head;
        }

        ListNode *prev = NULL, *curr = head;
        while(index--)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        return head;
    }

    //? Display Linked List
    void displayList(ListNode *read)
    {
        cout << "Linked List: ";
        while(read != NULL)
        {

            cout << read -> data << " ";
            read = read -> next;
        } cout << endl;
    }
};

int main()
{
    int A[6] = {10, 20, 30, 40, 50, 60};

    ListNode *head = NULL;

    head = head -> createLL(A, 0, 6);
    head -> displayList(head);

    head = head -> removeNthFromEnd(head, 2);
    head -> displayList(head);

    head = head -> removeNthFromEnd(head, 5);
    head -> displayList(head);
}