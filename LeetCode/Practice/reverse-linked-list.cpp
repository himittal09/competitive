#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current, *previous, *next;

        current = head;
        previous = next = nullptr;
        
        while (current)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode *current, *previous, *next;

        current = head;
        previous = next = nullptr;
        
        while (current)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
};