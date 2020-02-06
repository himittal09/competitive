#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int prec (char c) { 
    if (c == '^') {
        return 3; 
    }
    if (c == '*' || c == '/') {
        return 2; 
    }
    if (c == '+' || c == '-') {
        return 1;
    }
    return -1; 
} 

string infixToPostfix (string exp) {
    string postfix;
    stack<char> st;
    st.push('N');
    int length = exp.length();
    
    for (int i=0 ; i<length ; i++) {
        if ((exp[i] >= 'a' && exp[i] <= 'z')) {
            postfix = postfix + exp[i];
        } else if (exp[i] == '(') {
            st.push(exp[i]);
        } else if (exp[i] == ')') {
            while (st.top() != '(' && st.top() != 'N') {
                postfix = postfix + st.top();
                st.pop();
            }
            if (st.top() == '(') {
                st.pop();
            }
        } else {
            while (st.top() != 'N' && prec(exp[i]) <= prec(st.top())) { 
                postfix += st.top(); 
                st.pop();
            } 
            st.push(exp[i]);
        }
    }

    while (st.top() != 'N') { 
        postfix += st.top(); 
        st.pop(); 
    }
    
    return postfix;
}

int main () {
    int t;
    string exp;
    cin >> t;
    while (t--) {
        cin >> exp;
        cout << infixToPostfix(exp) << endl;
    }
}