#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
    stack<TreeNode *> mys;

    void pushAllLeft (TreeNode *root)
    {
        while (root)
        {
            mys.push(root);
            root = root->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushAllLeft(root);
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode *curr {mys.top()};
        mys.pop();
        pushAllLeft(curr->right);
        return curr->val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !mys.empty();
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();