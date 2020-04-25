class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return utilfunc(nums, 0, nums.size()-1);
    }

    TreeNode *utilfunc (vector<int>& nums, int start, int end)
    {
        if (start > end)
        {
            return nullptr;
        }
        int mid = start + (end-start) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = utilfunc(nums, start, mid-1);
        node->right = utilfunc(nums, mid+1, end);
        return node;
    }
};


auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();