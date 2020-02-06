class Solution {
public:
    int maximum69Number (int num) {
        string str;
        str = to_string(num);
        int pos=0;
        for (int i=0; i<str.length(); i++)
        {
            if (str[i] == '6')
            {
                str[i] = '9';
                break;
            }
        }
        stringstream geek(str); 
        geek >> pos;
        return pos;
    }
};