#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        const int val {root->val};
        queue<TreeNode *> myQ;
        myQ.push(root);
        while (!myQ.empty())
        {
            if (myQ.front()->val != val)
            {
                return false;
            }
            if (myQ.front()->left)
            {
                myQ.push(myQ.front()->left);
            }
            if (myQ.front()->right)
            {
                myQ.push(myQ.front()->right);
            }
            myQ.pop();
        }
        return true;
    }
};