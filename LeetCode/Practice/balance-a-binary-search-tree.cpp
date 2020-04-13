#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    vector<int> inorder;

    void inorderTraversal (TreeNode* root) {
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
            inorder.push_back(temp->val);
            temp = temp->right;
        }
    }

    TreeNode *constructTree (int start, int end)
    {
        if (end < start)
        {
            return nullptr;
        }
        int mid = (end + start) / 2;
        TreeNode *node = new TreeNode(inorder[mid]);
        node->left = constructTree(start, mid - 1);
        node->right = constructTree(mid + 1, end);
        return node;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder.clear();
        inorderTraversal(root);
        return constructTree(0, inorder.size()-1);
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();