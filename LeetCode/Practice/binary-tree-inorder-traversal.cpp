#include <stack>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> mys;
        TreeNode *temp = nullptr;
        vector<int> sol;
        mys.push(root);
        while (!mys.empty())
        {
            temp = mys.top();
            if (temp->left)
            {
                mys.push(temp->left);
                continue;
            }
            sol.push_back(temp->val);
            if (temp->right)
            {
                mys.push(temp->right);
                continue;
            }
            mys.pop();
            
        }
        return sol;
    }
};