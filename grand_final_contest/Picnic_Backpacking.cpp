#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<long long int> tom(n);
        for(int i = 0; i < n; i++){
            cin >> tom[i];
        }
        
        map<long long int, long long int> mp;
        for(int i = 0; i < m; i++){
            long long int x;
            cin >> x;
            mp[x]++;
        }
        
        long long int s;
        cin >> s;
        
        long long int count = 0;
        for(int i = 0; i < n; i++){
            long long int needed = s - tom[i];
            count += mp[needed];
        }
        
        cout << count << endl;
    }
    return 0;
}