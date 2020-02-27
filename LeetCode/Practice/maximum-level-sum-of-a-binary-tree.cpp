#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    inline int max (const int a, const int b) const noexcept
    {
        return a > b ? a : b;
    }
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *> myQ;
        myQ.push(root);
        int maxVal {0}, currentSum {0}, size {0}, levelCounter {0}, maxLevelCounter {0};
        TreeNode *tempNode;
        while (!myQ.empty())
        {
            levelCounter++;
            size = myQ.size();
            currentSum = 0;
            while (size--)
            {
                tempNode = myQ.front();
                myQ.pop();
                currentSum += tempNode->val;
                if (tempNode->left)
                {
                    myQ.push(tempNode->left);
                }
                if (tempNode->right)
                {
                    myQ.push(tempNode->right);
                }
            }
            if (currentSum > maxVal)
            {
                maxVal = currentSum;
                maxLevelCounter = levelCounter;
            }
        }
        return maxLevelCounter;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();