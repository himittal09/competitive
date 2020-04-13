#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    int maxDiameter;
    int height (TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        maxDiameter = max(maxDiameter, left + right);
        return 1 + max(left, right);
    }
public:
    Solution (): maxDiameter {0} {}
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};