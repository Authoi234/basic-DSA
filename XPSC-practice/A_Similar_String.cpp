#include <bits/stdc++.h>
using namespace std;

bool is_similar(char a, char b) {
    if (a == b) return true;
    if ((a == '1' && b == 'l') || (a == 'l' && b == '1')) return true;
    if ((a == '0' && b == 'o') || (a == 'o' && b == '0')) return true;
    return false;
}

int main() {
    int N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    bool similar = true;
    for (int i = 0; i < N; ++i) {
        if (!is_similar(S[i], T[i])) {
            similar = false;
            break;
        }
    }
    cout << (similar ? "Yes" : "No") << endl;
    return 0;
}