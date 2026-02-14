#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        bool wearing = false;
        int jacketWearCnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < a)
            {
                if (!wearing)
                {
                    wearing = true;
                    jacketWearCnt++;
                }
            }
            else if (x > b)
            {
                if (wearing)
                {
                    wearing = false;
                }
            }
        }
        cout << jacketWearCnt << endl;;
    }
    return 0;
}