#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            (!st.empty() && ((c == '1' && st.top() == '0') || (c == '0' && st.top() == '1'))) ? st.pop() : st.push(c);
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}