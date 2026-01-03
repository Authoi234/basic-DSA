#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    for (int i = 1; i <= n /* n+2, n-2, n*2, n/2 all are O(n) complexity - ignore constants  */; i += 2) // i+=2 will make it to run  O ( n/2 ) , which is - O(n) as we ignored constants
    {
        cout << i << " ";
    }
    cout << endl; // O(1)
    for (int i = 1; i <= n; i++) // O(n)
    {
        cout << i << " ";
    }

    return 0; // O(1)
}
/* ------------------------------------------------------------------------------- */
/*                            O { 1 + 1 + (n/2) + 1 + n + 1 }                      */
/*                              O ( 1 + 1 + n + 1 + n + 1 )                        */
/*                                    O ( n + n + 4 )                              */
/*                                      O( 2n + 4 )                                */
/*                                       O(n + 4)                                  */
/*                                         O(n)                                    */
//  Thats the time complexity of the whole code -- O(n)