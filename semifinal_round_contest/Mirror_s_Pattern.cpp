#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i <= n - 1; i++)
    {
        cout << i;

        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }

        cout << n - i + 1;
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << n - i + 1;
    }

    return 0;
}
