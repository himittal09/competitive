#include <stack>

using namespace std;

class MinStack {
    inline int min (const int a, const int b) const noexcept
    {
        return a <= b ? a : b;
    }

    stack <int> s1, s2;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if (s1.empty())
        {
            s1.push(x);
        }
        else
        {
            s1.push(min(s1.top(), x));
        }
        s2.push(x);
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s2.top();
    }
    
    int getMin() {
        return s1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */