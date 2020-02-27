struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head)
        {
            return nullptr;
        }

        ListNode *temp = head;

        while (head->next)
        {
            if (head->next->val == val)
            {
                head->next = head->next->next;
            }
            else
            {
                head = head->next;
            }
        }

        if (temp->val == val)
        {
            temp = temp->next;
        }

        return temp;
    }
};