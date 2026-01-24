#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> &data, int k_val)
{
    sort(data.begin(), data.end()); 
    return data[k_val - 1];
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int value = findKthSmallest(v, K);
    cout << value << endl;
    return 0;
}