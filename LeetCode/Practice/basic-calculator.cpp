#include <iostream>
#include <stack>

using namespace std;

class Solution {
    int precedence (char op) { 
        if (op == '+' || op == '-') 
            return 1;
        return 0;
    }
    int applyOp (int a, int b, char op) { 
        switch (op) {
            case '+': return a + b; 
            case '-': return a - b;
        }
        return 0;
    } 
    void performOpt (stack<char>& ops, stack<int>& values) {
        int val2 = values.top(); 
        values.pop(); 
        
        int val1 = values.top(); 
        values.pop(); 
        
        values.push(applyOp(val1, val2, ops.top())); 
        ops.pop(); 
    }
public:
    int calculate(string s)
    {
        stack <int> values; 
        stack <char> ops;

        for (int i=0; i<s.length(); i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else if (s[i] == '(')
            {
                ops.push(s[i]); 
            }
            else if (isdigit(s[i]))
            {
                int num = 0;
                while (i < s.length() && isdigit(s[i]))
                {
                    num = (num * 10) + (s[i] - '0');
                    i++;
                }
                // go back on token to consider current token
                if (!isdigit(s[i]))
                {
                    i--;
                }
                values.push(num);
            }
            else if (s[i] == ')')
            {
                while(!ops.empty() && ops.top() != '(')
                {
                    performOpt(ops, values);
                } 
                // pop opening brace. 
                ops.pop();
            }
            else // an operator + or -
            {
                while (!ops.empty() && precedence(ops.top()) >= precedence(s[i]))
                {
                    performOpt(ops, values);
                } 
                // Push current s[i] to 'ops'. 
                ops.push(s[i]); 
            }
        }

        while (!ops.empty())
        { 
            performOpt(ops, values);
        }

        return values.top();
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();