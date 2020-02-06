#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int> >& queries) {
        int sum=0, valueToAdd, valueToAddAt;
        vector<int> soln;
        for (int val: A)
        {
            if (val % 2 == 0)
            {
                sum += val;
            }
        }
        for (vector<int>& query: queries)
        {
            valueToAdd = query[0];
            valueToAddAt = A[query[1]];

            A[query[1]] += valueToAdd;

            if (valueToAdd % 2 == 0)
            {
                if (valueToAddAt % 2 == 0)
                {
                    sum += valueToAdd;
                }
                //else don't modify sum
            }
            else
            {
                if (valueToAddAt % 2 == 0)
                {
                    sum -= valueToAddAt;
                }
                else
                {
                    sum += (valueToAddAt + valueToAdd);
                }
            }
            soln.push_back(sum);
        }
        return soln;
    }
};

int main ()
{
    Solution obj;
    vector<int> data = {1, 2, 3, 4};
    vector<vector<int> > query = {{1, 0}, {-3, 1}, {-4, 0}, {2, 3}};
    vector<int> result = obj.sumEvenAfterQueries(data, query);
    for (auto d: result)
    {
        cout << d << " ";
    }
    return 0;
}