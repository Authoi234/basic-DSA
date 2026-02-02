#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int test=0; test<t; test++)
    {
        int n;
        cin >> n;
        vector<int> round_nums;
        string s = to_string(n);
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i] != '0')
            {
                int digit = s[i] - '0';
                int round_num = digit * pow(10, len-1-i);
                round_nums.push_back(round_num);
            }
        }
        cout << round_nums.size() << endl;
        for(int num : round_nums)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}