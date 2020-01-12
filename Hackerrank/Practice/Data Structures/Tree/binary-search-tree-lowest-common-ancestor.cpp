#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if(root == NULL) {
            return new Node(data);
        } else {
            Node* cur;
            if(data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            } else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        Node *rootp = root;
        Node *lca;
        queue <Node *> v1t;
        v1t.push(root);
        while (root->data != v1) {
            if (v1 < root->data) {
                root = root->left;
            } else if (v1 > root->data) {
                root = root->right;
            }
            v1t.push(root);
        }
        root = rootp;
        lca = v1t.front();
        while (!v1t.empty() && (rootp = v1t.front()) == root && root->data != v2) {
            lca = v1t.front();
            if (v2 < root->data) {
                root = root->left;
            } else if (v2 > root->data) {
                root = root->right;
            }
            v1t.pop();
        }
        return lca;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t--) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}
