#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};

    // l.remove(10);
    // for (int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    l.sort(greater<int>());
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.unique(); // works only on sorted list
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}