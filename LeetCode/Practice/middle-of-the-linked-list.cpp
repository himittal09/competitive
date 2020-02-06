#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *dc = head;
        while (dc && dc->next)
        {
            head = head->next;
            dc = dc->next->next;
        }
        return head;
    }
};