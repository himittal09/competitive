class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        bool increase = true, decrease = true;
        for (int i=0; i<A.size()-1 && (increase || decrease); i++)
        {
            isDecreasing = (A[i] >= A[i+1]);
            isIncreasing = (A[i] <= A[i+1]);
            increase = increase ? isIncreasing : increase;
            decrease = decrease ? isDecreasing : decrease;
        }
        return (increase || decrease);
    }
};