#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        cin >> m;
        vector<long long int> d(m);
        for (auto &i : d)
            cin >> i;

        long long int last = d[m - 1];
        bool last_ok = false;

        for (int i = 0; i < n; i++)
            if (b[i] == last)
            {
                last_ok = true;
                break;
            }

        if (!last_ok)
        {
            cout << "NO\n";
            continue;
        }

        map<long long, int> freq;
        for (auto x : d) freq[x]++;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (freq[b[i]] == 0)
                {
                    ok = false;
                    break;
                }
                freq[b[i]]--;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}