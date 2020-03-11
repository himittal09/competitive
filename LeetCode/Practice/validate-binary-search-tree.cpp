#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    void inOrderStore (TreeNode *root, vector<int>& myTree)
    {
        if (!root)
        {
            return;
        }
        inOrderStore(root->left, myTree);
        myTree.push_back(root->val);
        inOrderStore(root->right,myTree);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> myTree;
        inOrderStore(root, myTree);
        for (int i {1}; i<myTree.size(); i++)
        {
            if (myTree[i-1] > myTree[i])
            {
                return false;
            }
        }
        return true;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();