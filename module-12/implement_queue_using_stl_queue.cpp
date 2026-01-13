#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    if (!q.empty())
        q.pop();

    queue<int> q2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q2.push(val);
    }
    cout << q2.front() << " " << q2.back() << " " << q2.size() << " " << endl;
    while (!q2.empty())
    {
        cout << q2.front() << endl;
        q2.pop();
    }
    return 0;
}