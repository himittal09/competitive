#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        while (temp)
        {
            while (temp->next && temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
        return head;
    }

    ListNode* deleteDuplicatesRecursive(ListNode* head) {
        if (!(head && head->next))
        {
            return head;
        }
        head->next = deleteDuplicatesRecursive(head->next);
        return head->val == head->next->val ? head->next : head;
    }
};