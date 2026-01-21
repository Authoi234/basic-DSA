#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if (mp.size() > 2)
        {
            cout << "NO" << endl;
        }
        else {
            if (mp.size() == 2)
            {
                vector<int> v;
                for (auto p:mp)
                {
                    v.push_back(p.second);
                }
                if(abs(v[0] - v[1]) > 1) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
            else cout << "YES" << endl;
        }
        
    }
    return 0;
}