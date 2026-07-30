#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Remove matching nodes from the beginning
        while (head != NULL && head->val == val) {

            ListNode* del = head;

            head = head->next;

            delete del;
        }

        // If list becomes empty
        if (head == NULL)
            return NULL;

        ListNode* temp = head;

        while (temp->next != NULL) {

            if (temp->next->val == val) {

                ListNode* del = temp->next;

                temp->next = temp->next->next;

                delete del;

            }
            else {

                temp = temp->next;

            }
        }

        return head;
    }
};

// Insert node at the end
void insertAtEnd(ListNode*& head, int val) {

    ListNode* newNode = new ListNode(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print linked list
void printList(ListNode* head) {

    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


int main() {

    ListNode* head = NULL;

    // Create:
    // 6 -> 6 -> 1 -> 2 -> 6 -> 3 -> 6 -> NULL

    insertAtEnd(head, 6);
    insertAtEnd(head, 6);
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 6);
    insertAtEnd(head, 3);
    insertAtEnd(head, 6);

    cout << "Before deletion:" << endl;
    printList(head);

    int val = 6;

    Solution solution;

    head = solution.removeElements(head, val);

    cout << "\nAfter deleting " << val << ":" << endl;
    printList(head);

    return 0;
}