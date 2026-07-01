#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int precedence(char ch) {
        if (ch == '^') return 3;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '+' || ch == '-') return 1;
        return 0;
    }

    string infixToPostfix(string& s) {
        stack<char> st;
        string ans = "";

        for (char ch : s) {

            if ((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z') ||
                (ch >= '0' && ch <= '9')) {
                ans += ch;
            }

            else if (ch == '(') {
                st.push(ch);
            }

            else if (ch == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop(); // remove '('
            }

            else { // operator
                while (!st.empty() &&
                       st.top() != '(' &&
                       (precedence(st.top()) > precedence(ch) ||
                        (precedence(st.top()) == precedence(ch) && ch != '^'))) {
                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};