#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<pair<TreeNode *, int> > myQ;
        myQ.push(make_pair(root, 1));
        pair<TreeNode *, int> myNode;
        int sum = 0, currentLevel=1;
        while (!myQ.empty())
        {
            myNode = myQ.front();
            if ((myNode.second) == currentLevel)
            {
                sum += (myNode.first)->val;
            }
            else
            {
                sum = (myNode.first)->val;
                currentLevel = myNode.second;
            }
            myQ.pop();
            if ((myNode.first)->left)
            {
                myQ.push(make_pair((myNode.first)->left, myNode.second+1));
            }
            if ((myNode.first)->right)
            {
                myQ.push(make_pair((myNode.first)->right, myNode.second+1));
            }
        }
        return sum;
    }
};