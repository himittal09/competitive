#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
    Iterative more memory efficient
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)
        {
            return l2;
        }
        if (!l2)
        {
            return l1;
        }
        ListNode *sol = (l1->val < l2->val) ? l1 : l2;
        ListNode *solcpy = sol;
        ListNode **track = &sol;
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                *track = l1;
                track = &(l1->next);
                l1 = l1->next;
            }
            else
            {
                *track = l2;
                track = &(l2->next);
                l2 = l2->next;
            }
        }

        while (l1)
        {
            *track = l1;
            track = &(l1->next);
            l1 = l1->next;
        }

        while (l2)
        {
            *track = l2;
            track = &(l2->next);
            l2 = l2->next;
        }

        return solcpy;
    }

    ListNode* mergeTwoListsrecursive (ListNode* l1, ListNode* l2) {
        if (!l1)
        {
            return l2;
        }
        if (!l2)
        {
            return l1;
        }
        if (l1->val < l2->val)
        {
            l1->next = mergeTwoListsrecursive(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoListsrecursive(l1, l2->next);
            return l2;
        }
    }
};