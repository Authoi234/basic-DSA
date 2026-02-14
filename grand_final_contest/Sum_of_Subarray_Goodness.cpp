#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long int long_large_boro_num = 1000000007;
    long long int result = 0;

    map<long long int, int> last_seen;

    for (int i = 0; i < n; i++)
    {
        long long int prev;

        if (last_seen.find(a[i]) == last_seen.end())
            prev = -1;
        else
            prev = last_seen[a[i]];

        long long int left = i - prev;
        long long int right = n - i;

        long long int contribution =
            (a[i] % long_large_boro_num) * (left % long_large_boro_num) % long_large_boro_num * (right % long_large_boro_num) % long_large_boro_num;

        result = (result + contribution) % long_large_boro_num;

        last_seen[a[i]] = i;
    }

    cout << result << "\n";
    return 0;
}