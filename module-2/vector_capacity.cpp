#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << v.capacity() << endl; // 0
    v.push_back(10);
    cout << v.capacity() << endl; // 1
    v.push_back(20);
    cout << v.capacity() << endl; // 2
    v.push_back(30);
    cout << v.capacity() << endl; // 4
    v.push_back(40);
    cout << v.capacity() << endl; // 4
    v.push_back(50);
    cout << v.capacity() << endl; // 8

    cout << v.size() << endl; // 5
    v.clear();
    cout << v.size() << endl; // 0
    cout << v[0] << endl;     // 10
    cout << v[1] << endl;     // 20
    cout << v[3] << endl;     // 40

    v.resize(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(10, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}