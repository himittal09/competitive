class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int bucket[1001] = {0};
        for (auto val: arr1)
        {
            bucket[val]++;
        }
        int counter=0;
        for (auto val: arr2)
        {
            while (bucket[val])
            {
                arr1[counter] = val;
                counter++;
                bucket[val]--;
            }
        }
        for (int i=0; i<1001; i++)
        {
            while (bucket[i])
            {
                arr1[counter] = i;
                bucket[i]--;
                counter++;
            }
        }
        return arr1;
    }
};