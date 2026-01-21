#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int screen = b / 2;
        int leftCells = screen * 7;
        if(b%2 == 1){
            screen++;
            leftCells += 11; 
        }
        if (a > leftCells)
        {
            a -= leftCells;
            screen += a/15;
            if(a%15 != 0) screen++;
        }    
        cout << screen << endl;
    }
    return 0;
}