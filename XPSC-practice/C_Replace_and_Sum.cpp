#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        for (int i = 0; i < n; i++)
        {
            a[i] = max(a[i], b[i]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            a[i] = max(a[i], a[i + 1]);
        }

        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            // a[r] - a[l-1]
            long long ans = a[r];
            if (l - 1 >= 0)
                ans -= a[l - 1];
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
