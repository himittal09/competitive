#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        
        unordered_map <int, int> wordHash;
        for (string& word: words)
        {
            int hash = 0;
            for (char ch: word)
            {
                hash |= (1 << (ch - 'a'));
            }
            wordHash[hash]++;
        }
        
        vector<int> puzzleCount;
        for (string& puzzle: puzzles)
        {
            vector<int> arr(64, (1 << (puzzle[0] - 'a')));
            for (int i=0; i<64; i++)
            {
                for (int j = 1; j < 7; j++)
                {
                    if (i & (1 << (j-1)))
                    {
                        arr[i] |= (1 << (puzzle[j] - 'a'));
                    }
                }
            }

            int count=0;
            for (int num: arr)
            {
                count += wordHash[num];
            }
            puzzleCount.push_back(count);

        }
        
        return puzzleCount;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();