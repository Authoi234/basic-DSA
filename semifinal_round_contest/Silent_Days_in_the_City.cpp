#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    vector<int> isSilent(N + 1, 0);
    for (int i = 2; i < N; i++) {
        if (A[i] < A[i - 1] && A[i] < A[i + 1]) {
            isSilent[i] = 1;
        }
    }
    
    vector<int> prefix(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + isSilent[i];
    }
    
    int Q;
    cin >> Q;
    
    for (int q = 0; q < Q; q++) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << endl;
    }
    
    return 0;
}