using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *sol {head};
        bool deleteCurrentNode {false};
        if (!head)
        {
            return nullptr;
        }
        while (head && head->next)
        {
            if (head->val == head->next->val)
            {
                head->next = head->next->next;
                deleteCurrentNode = true;
            }
            else if (deleteCurrentNode)
            {
                head->val = head->next->val;
                head->next = head->next->next;
                deleteCurrentNode = false;
            }
            else
            {
                head = head->next;
            }
        }
        if (deleteCurrentNode)
        {
            // delete last node here
            // last node is being currently pointed at
            // re-traverse to get parent
        }
        return sol;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
