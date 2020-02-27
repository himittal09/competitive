#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2)
        {
            return true;
        }
        if (!root1 || !root2)
        {
            return false;
        }
        if (root1->val != root2->val)
        {
            return false;
        }
        int root1L{-1}, root1R {-1}, root2L {-1}, root2R{-1};
        root1L = root1->left ? root1->left->val : -1;
        root1R = root1->right ? root1->right->val : -1;
        root2L = root2->left ? root2->left->val : -1;
        root2R = root2->right ? root2->right->val : -1;
        if ((root1L == root2R) && (root1R == root2L))
        {
            // swap root here
            swap(root1->left, root1->right);
            return flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
        }
        if ((root1L == root2L) && (root1R == root2R))
        {
            return flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
        }
        return false;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();