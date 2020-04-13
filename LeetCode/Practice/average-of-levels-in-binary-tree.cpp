#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue <TreeNode *> myQ;
        myQ.push(nullptr);
        myQ.push(root);

        vector <double> sol;
        int levelSize {0};
        double levelSum {0};
        TreeNode *temp {nullptr};

        while (!myQ.empty())
        {
            temp = myQ.front();
            myQ.pop();
            if (temp == nullptr)
            {
                if (levelSize)
                {
                    sol.push_back(levelSum / (double)(levelSize));
                }
                levelSize = 0;
                levelSum = 0.0;
                if (myQ.size() > 0)
                {
                    myQ.push(nullptr);
                }
            }
            else
            {
                levelSize++;
                levelSum += temp->val;
                if (temp->left)
                {
                    myQ.push(temp->left);
                }
                if (temp->right)
                {
                    myQ.push(temp->right);
                }
            }
        }

        return sol;
    }
};


static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();