#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    stack<int> A;
    queue<int> B;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        A.push(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin >> val;
        B.push(val);
    }
    
    bool flag = true;
    while(!A.empty() && !B.empty())
    {
        if(A.top() != B.front())
        {
            flag = false;
            break;
        }
        A.pop();
        B.pop();
    }
    if(flag == true && A.empty() && B.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}