#include <random>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    ListNode *root;
    size_t listSize;

    _NODISCARD constexpr unsigned int generate_random () const
    {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<unsigned int> dist(0, listSize-1);
        unsigned int random_number_generated {dist(mt)};
        return random_number_generated;
    }

public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head): root {head}, listSize {0}
    {
        while (head)
        {
            listSize++;
            head = head->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom () {
        unsigned int loc = generate_random();
        ListNode *head = root;
        while (loc)
        {
            head = head->next;
            loc--;
        }
        return head->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */