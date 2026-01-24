#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x); 
        else
            odd.push_back(x);
    }

    for (int val : even)
    {
        cout << val << " ";
    }

    for (int val : odd)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}