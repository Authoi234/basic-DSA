#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        
        long long product = 1;
        int minIndex = 0;

        for (int i = 0; i < n; i++)
        {
            product *= a[i];
            if (a[i] < a[minIndex])
                minIndex = i;
        }
        
        a[minIndex]++;
        product = 1;
        for (int i = 0; i < n; i++)
        {
            product *= a[i];
        }
        
        cout << product << "\n";
    }

    return 0;
}