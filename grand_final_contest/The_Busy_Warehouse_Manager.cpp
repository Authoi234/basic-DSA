#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int q;
    cin >> q;

    map<long long int, long long int> inv;
    priority_queue<pair<long long int, long long int>> pq;

    while (q--)
    {
        long long int type;
        cin >> type;

        if (type == 1)
        {
            long long int x;
            cin >> x;
            inv[x]++;
            pq.push({inv[x], x});
        }
        else
        {
            bool flag = false;
            while (!pq.empty())
            {
                auto top = pq.top();
                pq.pop();

                long long int cnt = top.first;
                long long int item = top.second;

                if (inv.count(item) && inv[item] == cnt)
                {
                    cout << item << "\n";
                    inv.erase(item);
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}
