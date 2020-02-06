#include <vector>
#include <iostream>
using namespace std;

class Difference {
    private:
        vector<int> elements;
  	public:
  	    int maximumDifference;
        Difference (vector<int> elements) {
            this->elements = elements;
        }

        void computeDifference () {
            int max = INT_MIN, min = INT_MAX;
            for (auto val: elements) {
	            if (val > max) {
                    max = val;
                }
                if (val < min) {
                    min = val;
                }
            }
            maximumDifference = max - min;
        }

};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}