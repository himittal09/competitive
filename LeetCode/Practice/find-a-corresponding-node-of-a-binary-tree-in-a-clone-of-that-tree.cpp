#include <iostream>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode (int x) : val {x}, left {nullptr}, right {nullptr} {}
};

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (!original)
        {
            return nullptr;
        }
        typedef pair<TreeNode *, TreeNode *> myQItem;
        myQItem temp;
        queue<myQItem> myQ;
        myQ.push(make_pair(original, cloned));
        while (!myQ.empty())
        {
            temp = myQ.front();
            myQ.pop();
            if (temp.first == target)
            {
                break;
            }
            if ((temp.first)->left)
            {
                myQ.push(make_pair((temp.first)->left, (temp.second)->left));
            }
            if ((temp.first)->right)
            {
                myQ.push(make_pair((temp.first)->right, (temp.second)->right));
            }
        }
        return temp.second;
    }
};


static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();