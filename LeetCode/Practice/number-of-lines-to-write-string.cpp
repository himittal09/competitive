class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lineWidth {0}, lineCount {0};
        for (char ch: S)
        {
            if ((lineWidth + widths[ch-'a']) <= 100)
            {
                lineWidth += widths[ch-'a'];
            }
            else
            {
                lineCount++;
                lineWidth = widths[ch-'a'];
            }
        }
        return {lineCount+1, lineWidth};
    }
};