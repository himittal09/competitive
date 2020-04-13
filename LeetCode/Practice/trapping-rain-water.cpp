class Solution {
public:
    int trap(vector<int>& height) {
        int start = 0, end = height.size()-1;
        int maxHeightL {0}, maxHeightR {0};
        int catchedRainwater {0};
        while (start <= end)
        {
            if (height[start] <= height[end])
            {
                maxHeightL = max(maxHeightL, height[start]);
                catchedRainwater += maxHeightL - height[start];
                start++;
            }
            else
            {
                maxHeightR = max(maxHeightR, height[end]);
                catchedRainwater += maxHeightR - height[end];
                end--;
            }
        }
        return catchedRainwater;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();