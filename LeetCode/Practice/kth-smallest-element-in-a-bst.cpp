#include <iostream>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    stack <TreeNode *> myS;

    void iterate (TreeNode *root)
    {
        TreeNode *temp {root};
        while (temp)
        {
            myS.push(temp);
            temp = temp->left;
        }
    }

    int next ()
    {
        TreeNode *curr {myS.top()};
        myS.pop();
        iterate (curr->right);
        return curr->val;
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        iterate (root);
        int value {0};
        while (k--)
        {
            value = next();
        }
        return value;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();