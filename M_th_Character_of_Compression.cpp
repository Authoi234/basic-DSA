#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int M;
    cin >> S >> M;
    string expanded;
    for (int i = 0; i < S.length(); i++)
    {
        if (isalpha(S[i]))
        {
            expanded += S[i];
        }
        else if (isdigit(S[i]))
        {
            int count = S[i] - '0';
            char lastChar = expanded[expanded.length() - 1];
            for (int j = 1; j < count; j++)
            {
                expanded += lastChar;
            }
        }
    }
    cout << expanded[M-1];
    
    return 0;
}