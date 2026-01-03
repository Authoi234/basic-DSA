#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5};

    // vector<int> v2;
    // v2 = v;
    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }

    // v.pop_back();
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // v.push_back(10);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // v.insert(v.begin() + 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // vector<int> v2 = {200, 300, 400};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // v.erase(v.begin() + 2);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // v.erase(v.begin()+1,v.begin()+5);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    vector<int> v = {1, 2, 3, 2, 4, 5 ,2};

    // replace(v.begin(), v.end(), 2, 100);
    
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // auto it = find(v.begin(), v.end(), 100);

    // if (it != v.end())
    // {
    //     cout << "Not found" << endl;
    // }
    // else
    // {
    //     cout << "Found" << endl;
    // }

    // cout << v[v.size()-1] << endl;
    // cout << v.back() << endl;
    // cout << v[0] << endl;
    // cout << v.front() << endl;


    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    

    return 0;
}