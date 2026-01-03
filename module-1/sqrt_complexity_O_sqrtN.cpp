#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= sqrt(n) ; i++) // O(sqrt n) or O (√n)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= n; i++) // less optimized, Time complexity is O(n)
    // {
    //     if(n%i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    for (int i = 1; i <= sqrt(n); i++) // Optimized , time complexity is O( sqrt n) or O(√n)
    {
        if(n%i == 0)
        {
            cout << i << " " << n/i << " ";
        }
    }

    return 0;
}