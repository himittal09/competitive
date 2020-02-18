#include <queue>

using namespace std;

class RecentCounter {
    queue<int> myq;
public:
    RecentCounter() {
        // use a queue
    }
    
    int ping(int t) {
        myq.push(t);
        while (!myq.empty() && myq.front() < (t-3000))
        {
            myq.pop();
        }
        return myq.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */