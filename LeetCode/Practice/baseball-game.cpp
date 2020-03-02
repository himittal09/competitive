class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int sum=0;
        for(auto& val: ops)
        {
            if (val == "C")
            {
                s.pop();
            }
            else if (val == "D")
            {
                s.push(2*s.top());
            }
            else if (val == "+")
            {
                int x1 = s.top();
                s.pop();
                int x2 = s.top();
                s.push(x1);
                s.push(x1+x2);
            }
            else
            {
                s.push(stoi(val));
            }
        }
        while(!s.empty())
        {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};