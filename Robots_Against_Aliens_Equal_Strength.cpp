#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    long long fixedSum = 0;
    int foundFixed = 0;

    for (int i = 0; i < n; i++) {
        long long sum = 0;
        int haveZero = 0;

        for (int j = 0; j < m; j++) {
            sum += a[i][j];
            if (a[i][j] == 0)
                haveZero = 1;
        }

        if (haveZero == 0) {
            if (foundFixed == 0) {
                fixedSum = sum;
                foundFixed = 1;
            } else if (sum != fixedSum) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}