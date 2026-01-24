#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K;
    cin >> N >> K;

    if (N == 0){
        cout << 0 << " " << 0 << endl;
        return 0;
    }

    long long x = K / N;
    long long y = K % N;

    cout << x << " " << y << endl;

    return 0;
}