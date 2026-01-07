#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 20};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    l.push_back(40);
    l.push_front(5);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    l.pop_back();
    l.pop_front();

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << *next(l.begin(), 2) << endl;

    l.insert(next(l.begin(), 2), 100);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l2 = {100, 200};
    l.insert(next(l.begin(), 2), l2.begin(), l2.end());

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v = {1, 2, 3};
    l.insert(next(l.begin(), 3), v.begin(), v.end());

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 4));

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 2), next(l.begin(), 4));
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    replace(l.begin(), l.end(), 20, 100);

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 200);
    if (it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found"<< endl;
    }
    

    return 0;
}