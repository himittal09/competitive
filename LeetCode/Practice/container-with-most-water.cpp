class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size()-1;
        int area {0}, maxL {0}, maxR {0};
        
        while (start <= end)
        {
            if (height[start] <= height[end])
            {
                maxL = max(maxL, height[start]);
                area = max(area, maxL * (end-start));
                start++;
            }
            else
            {
                maxR = max(maxR, height[end]);
                area = max(area, maxR * (end-start));
                end--;
            }
        }
        return area;
    }
};