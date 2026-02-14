#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    vector<long long int> a(n), even, odd;
    for (auto &i : a)
        cin >> i;

    sort(a.begin(), a.end(), greater<long long int>());

    for (auto i : a)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    long long int ans = -1;
    if (!even.empty())
        ans = even[0];
    if (even.size() >= 2)
        ans = max(ans, even[0] + even[1]);
    if (odd.size() >= 2)
        ans = max(ans, odd[0] + odd[1]);
    cout << ans << endl;
    return 0;
}
