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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        stack<TreeNode *> mys;
        
        if (!root)
        {
            return sol;
        }

        mys.push(root);

        while (!mys.empty())
        {
            root = mys.top();
            mys.pop();
            sol.push_back(root->val);
            if (root->right)
            {
                mys.push(root->right);
            }
            if (root->left)
            {
                mys.push(root->left);
            }
        }


    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();