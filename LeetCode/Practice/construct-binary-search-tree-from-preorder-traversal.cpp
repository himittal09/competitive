class Solution {
    int counter;
public:
    Solution (): counter{0} {}
    
    TreeNode* bstFromPreorder(vector<int>& preorder, int guard=INT_MAX) {
        if (counter == preorder.size() || guard < preorder[counter]) return nullptr;
        TreeNode *node = new TreeNode(preorder[counter]);
        node->left = bstFromPreorder(preorder, preorder[counter++]);
        node->right = bstFromPreorder(preorder, guard);
        return node;
    }
};