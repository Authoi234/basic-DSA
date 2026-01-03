#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int X;
    cin >> X;
      if (X == 0) {
        cout << 0 << endl;  
        return 0;
    }
    //commission per course = (20 * X) / 100;
    //                       or, .20x / 100
    //                       take, number of course = n
    //                       or, .20x/100 * n > = 100
    //                       n >= 500 / x
    //                       ceil value is n >= 500+(x-1) / x
    long long courses_needed = (500 + X - 1) / X;
    cout << courses_needed << endl;
    return 0;
}