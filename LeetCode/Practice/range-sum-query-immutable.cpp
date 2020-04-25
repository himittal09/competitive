#include <vector>

using namespace std;

class NumArray {
    vector<int> num;
public:
    NumArray(vector<int>& nums): num {std::move(nums)} {
        for (int i=1; i<num.size(); i++)
        {
            num[i] += num[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        if (i != 0)
        {
            return num[j] - num[i-1];
        }
        else
        {
            return num[j];
        }
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();