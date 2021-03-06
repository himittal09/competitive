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
        vector<int> sol;
        stack<TreeNode *> mys;
        TreeNode *temp = root;
        while (temp || !mys.empty())
        {
            while (temp)
            {
                mys.push(temp);
                temp = temp->left;
            }
            temp = mys.top();
            mys.pop();
            sol.push_back(temp->val);
            temp = temp->right;
        }
        return sol;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();