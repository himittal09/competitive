#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int lastSum;
public:
    void inOrderProcess (TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        inOrderProcess(root->right);
        root->val += lastSum;
        lastSum = root->val;
        inOrderProcess(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        lastSum = 0;
        inOrderProcess(root);
        return root;
    }
};