#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    
    cin >> n; 

    for (int i = 1; i <= n ; i++) // O(n²) or O(n*n) or O(n squared) or O(n^2)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "Hello" << endl;
        }
    }
    return 0;
}