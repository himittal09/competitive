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
    vector<int> postorder(Node* root) {
        vector<int> list;
        stack <Node *> s1, s2;
        
        if (!root)
        {
            return list;
        }

        mys.push(root);
        Node *temp {nullptr};

        while (!s1.empty())
        {
            temp = s1.top();
            s2.push(temp);
            s1.pop();
            
            for (auto it {temp->children.begin()}; it != temp->children.end(); it++)
            {
                s1.push(*it);
            }
        }

        while (!s2.empty())
        {
            list.push_back(s2.top()->val);
            s2.pop();
        }

        return list;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();