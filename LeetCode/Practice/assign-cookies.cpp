class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort (g.begin(), g.end());
        sort (s.begin(), s.end());
        int gfi {0}, sfi {0}, contendedChildren {0};

        while (gfi < g.size() && sfi < s.size())
        {
            if (g[gfi] <= s[sfi])
            {
                contendedChildren++;
                gfi++;
            }
            sfi++;
        }
        return contendedChildren;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();