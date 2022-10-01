//              بسم الله الرحمن الرحيم

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Pi 3.14159265
#define TC    \
    int t;    \
    cin >> t; \
    while (t--)
#define M 1000000007
void Emy()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    Emy();
    // equivalent postfix expression
    string s;
    cin >> s;
    ll n = s.size();
    stack<double> st;
    for (int i = 0; i < n; i++)
    {
        double a = 0, b = 0;
        if (s[i] == '+')
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b + a);
        }
        else if (s[i] == '-')
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b - a);
        }
        else if (s[i] == '*')
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b * a);
        }
        else if (s[i] == '/')
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b / a);
        }
        else
        {
            st.push(s[i] - '0');
        }
    }

    cout << "value = " << st.top();
}
