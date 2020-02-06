// Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

// The Node struct is defined as follows:
#include <climits>
	
struct Node {
    int data;
    Node* left;
    Node* right;
};

bool checkBST(Node* root, int min = INT_MIN, int max = INT_MAX) {
    if (!root)
    {
        return true;
    }
    
    if (root->data < min || root ->data > max)
    {
        return false;
    }
    
    return checkBST(root->left, min, root->data - 1) && checkBST(root->right, root->data + 1, max);
}