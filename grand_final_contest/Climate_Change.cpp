#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    
    vector<long long int> a(n);
    long long int total_sum = 0;
    
    for(long long int i = 0; i < n; i++){
        cin >> a[i];
        total_sum += a[i];
    }
    
    if(total_sum % 2 != 0){
        cout << 0 << endl;
        return 0;
    }
    
    long long int dhora_val = total_sum / 2;
    long long int count = 0;
    long long int left_sum = 0;
    
    for(long long int i = 0; i < n - 1; i++){
        left_sum += a[i];
        if(left_sum == dhora_val){
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}