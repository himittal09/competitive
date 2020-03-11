#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val{x}, left{nullptr}, right{nullptr} {}
};

class Solution {
    int maxAncestorDiffAux (const TreeNode *root, const int minVal, const int maxVal) const noexcept
    {
        if (!root)
        {
            return maxVal - minVal;
        }
        int leftSubtreeMax {maxAncestorDiffAux(root->left, min(minVal, root->val), max(maxVal, root->val))};
        int rightSubTreeMax {maxAncestorDiffAux(root->right, min(minVal, root->val), max(maxVal, root->val))};
        return max(leftSubtreeMax, rightSubTreeMax);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return maxAncestorDiffAux(root, root->val, root->val);
    }
};