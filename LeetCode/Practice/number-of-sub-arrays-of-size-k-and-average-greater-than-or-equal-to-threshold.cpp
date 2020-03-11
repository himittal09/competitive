class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double avg {0};
        int counter {0};
        for (int i=0; i<k; i++)
        {
            avg += arr[i];
        }
        avg /= k;
        if (avg >= threshold)
        {
            counter++;
        }
        for (int i {k}; i < arr.size(); i++)
        {
            avg -= (static_cast<double>(arr[i-k]) / k);
            avg += (static_cast<double>(arr[i]) / k);
            if (avg >= threshold)
            {
                counter++;
            }
        }
        return counter++;
    }
};

    auto speedup = []() {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();