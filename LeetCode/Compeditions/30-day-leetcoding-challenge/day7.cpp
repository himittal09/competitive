class Solution {
public:
    int countElements(vector<int>& arr) {
        int bucket[1001] = {0};
        int sol {0}, temp{0};
        for (int val: arr)
        {
            bucket[val]++;
        }
        for (int i=0; i<1000; i++)
        {
            if (bucket[i+1])
            {
                sol += bucket[i];
            }
        }
        return sol;
    }
};