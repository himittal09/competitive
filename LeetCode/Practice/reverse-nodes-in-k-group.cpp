struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    bool nextProcessingAvailable (ListNode *head, int k)
    {
        int counter = 0;
        while (head && counter < k)
        {
            counter++;
            head = head->next;
        }
        return counter >= k;
    }

    // workon this function
    void partialReverse (ListNode *head, ListNode *prev, ListNode *next, int count)
    {
        ListNode *firstProcessedNode {head};
        while (count--)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        firstProcessedNode->next = head;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k <= 1)
        {
            return head;
        }
        ListNode *previous {nullptr}, *next {nullptr};
        while (nextProcessingAvailable(head, k))
        {
            partialReverse(head, previous, next, k);
        }
    }
};