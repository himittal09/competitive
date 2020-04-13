#include <vector>
#include <stack>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val): val{_val} { }

    Node(int _val, vector<Node*> _children): val {_val}, children {_children} { }
};

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> traversal;
        if (!root)
        {
            return traversal;
        }
        stack<Node *> mys;
        mys.push(root);

        Node *temp {nullptr};

        while (!mys.empty())
        {
            temp = mys.top();
            mys.pop();
            traversal.push_back(temp->val);
            for (auto it = temp->children.rbegin(); it != temp->children.rend(); it++)
            {
                mys.push(*it);
            }
        }
        return traversal;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();