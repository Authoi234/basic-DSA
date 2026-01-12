#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    cout << endl;
    stack<int> inputtedstack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inputtedstack.push(x);
    }
    while(!inputtedstack.empty())
    {
        cout << inputtedstack.top() << " ";
        inputtedstack.pop();
    }
    return 0;
}