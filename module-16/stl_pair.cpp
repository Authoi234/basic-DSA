#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p;
    // p = make_pair("Hello",3);
    p = {"Hello", 3};
    cout << p.first << " " << p.second << endl;
    vector<pair<int, int>> v={{5,3},{6,7}};
    for (int i = 0; i < 2; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    return 0;
}