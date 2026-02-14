#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 5;
    mp["shamim"] = 50;
    mp["hamim"] = 250;
    cout << mp["ramim"] << endl;
    cout << mp["damim"] << endl;
    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    if(mp.count("famim"))
        cout << "Ache";
    else cout << "Nai";
    return 0;
}