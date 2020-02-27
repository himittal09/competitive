#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)
        {
            return l2;
        }
        if (!l2)
        {
            return l1;
        }

        ListNode result(0);
        ListNode* head = &result;

        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                head->next = l1;
                l1 = l1->next;
            }
            else
            {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        
        if (!l1)
        {
            head->next = l2;
        }
        else
        {
            head->next = l1;
        }

        return result.next;
    }
public:
    ListNode* mergeKLists(vector<ListNode *>& lists) {
        if (!lists.size())
        {
            return nullptr;
        }

        int size = lists.size();
        int i=0;
        
        while (size > 1)
        {
            for (i=0; i < size/2; i++)
            {
                lists[i]  = mergeTwoLists(lists[i*2],lists[i*2+1]);
            }
            if (size & 1)
            {
                lists[i] = lists[i*2];   
            }
            size = size/2 + size%2;
        }
        return lists[0];
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();