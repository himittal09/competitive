#include <unordered_map>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mymap;
        for (int& val: arr)
        {
            mymap[val]++;
        }

        typedef function<bool(pair<int, int>, pair<int, int>)> Comparator;
 
	    Comparator compFunctor =
        [](std::pair<int, int> elem1 ,std::pair<int, int> elem2)
        {
            return elem1.second > elem2.second;
        };

        set<pair<int, int>, Comparator> setOfWords(mymap.begin(), mymap.end(), compFunctor);

        int Counter=0, ct2=0;

        for (pair<int, int> element: setOfWords)
        {
            if (Counter < (arr.size() / 2))
            {
                Counter += element.second;
                ct2++;
            }
            else
            {
                break;
            }
            
        }

        return ct2;
    }
};