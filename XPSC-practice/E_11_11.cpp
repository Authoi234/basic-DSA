#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> D(n+1);
    for(int i=1; i<=n; i++) {
        cin >> D[i];
    }
    int count = 0;
    for(int i=1; i<=n; i++) {
        string month = to_string(i);
        for(int j=1; j<=D[i]; j++) {
            string day = to_string(j);
            string combined = month + day;
            bool isRepdigit = true;
            char digit = combined[0];
            for(char c : combined) {
                if(c != digit) {
                    isRepdigit = false;
                    break;
                }
            }
            if(isRepdigit) count++;
        }
    }
    cout << count << endl;
    return 0;
}