#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 0; i <= n; i++)
            cin >> a[i];

        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            ans = min(ans, max(a[i], a[i + 1]));
        }

        cout << ans << endl;
    }
    return 0;
}
