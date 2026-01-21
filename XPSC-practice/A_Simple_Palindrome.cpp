#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        string ans = "";
        int i = 0;
        while(n--){
            ans += vowels[i];
            i++;
            if (i == 5) i = 0;
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}