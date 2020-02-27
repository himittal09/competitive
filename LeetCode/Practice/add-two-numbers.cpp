struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp {l1};
        int sum {0}, carry {0};
        while (l1 && l2)
        {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            l1->val = sum % 10;
            if (!l1->next)
            {
                l1->next = l2->next;
                if (!l1->next && carry)
                {
                    l1->next = new ListNode(carry);
                    l1 = l1->next;
                    carry = 0;
                }
                else if (l1->next)
                {
                    l1 = l1->next;
                }
                break;
            }
            else
            {
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        while (l1 && carry)
        {
            l1->val += carry;
            carry = l1->val / 10;
            l1->val = l1->val% 10;
            if (l1->next)
            {
                l1 = l1->next;
            }
            else
            {
                break;
            }
        }
        if (carry)
        {
            l1->next = new ListNode(carry);
        }
        return temp;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();