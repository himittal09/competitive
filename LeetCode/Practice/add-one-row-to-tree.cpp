struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if (!root)
        {
            return nullptr;
        }
        if (d == 1)
        {
            TreeNode *ptr = new TreeNode(v);
            ptr->left = root;
            return ptr;
        }
        if (d == 2)
        {
            TreeNode *leftptr = new TreeNode(v);
            TreeNode *rightptr = new TreeNode(v);
            leftptr->left = root->left;
            rightptr->right = root->right;
            root->left = leftptr;
            root->right = rightptr;
            return root;
        }
        root->left = addOneRow(root->left, v, d-1);
        root->right = addOneRow(root->right, v, d-1);
        return root;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();