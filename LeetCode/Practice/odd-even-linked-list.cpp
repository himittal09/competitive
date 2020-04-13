#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if (!head || !(head->next))
        {
            return head;
        }

        ListNode *odd = head;
        ListNode *eHead = head->next;
        ListNode *even = eHead;
        
        while (even && even->next)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = eHead;
        return head;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();