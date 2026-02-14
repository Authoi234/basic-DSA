#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long int> l(n), r(n);
        for (auto &i : l)
            cin >> i;
        for (auto &i : r)
            cin >> i;

        vector<long long> vul_option(n);
        vector<long long> baddho_option;

        for (int i = 0; i < n; i++)
        {
            vul_option[i] = max(l[i], r[i]);
            baddho_option.push_back(min(l[i], r[i]));
        }

        sort(baddho_option.begin(), baddho_option.end(), greater<long long>());

        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += vul_option[i];

        for (int i = 0; i < (k - 1); i++)
            sum += baddho_option[i];

        long long answer = sum + 1;
        cout << answer << endl;
    }
    return 0;
}