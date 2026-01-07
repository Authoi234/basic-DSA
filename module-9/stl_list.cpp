#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l;
    // cout << l.size() << endl;

    // list<int> l(10, 3);
    // cout << l.size() << endl;
    // // for (auto it = l.begin(); it!=l.end(); it++)
    // // {
    // //     cout << *it << " ";
    // // }
    // for (int val : l)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l);
    // for (int val : l2)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    // int a[] = {1, 2, 3};
    // list<int> l(a, a + 3);
    vector<int> v = {10, 20, 30};
    list<int> l(v.begin(), v.end());
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    // l.clear();
    // cout << l.size() << endl;
    if (l.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }
    l.resize(2);
    for (int val : l)
    {
        cout << val << " ";
    }
    l.resize(5, 100);
    for (int val : l)
    {
        cout << val << " ";
    }


    return 0;
}