
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    int helper (TreeNode *root, bool isParentEven, bool isGrandParentEven)
    {
        if (!root)
        {
            return 0;
        }
        int sumValue = 0;
        if (isGrandParentEven)
        {
            sumValue += root->val;
        }
        sumValue += helper(root->left, !(root->val & 1), isParentEven) + helper(root->right, !(root->val & 1), isParentEven);
        return sumValue;
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        return helper(root, false, false);
    }
};