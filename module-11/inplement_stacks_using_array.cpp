#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;

        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            if(!v.empty())
            {
                v.pop_back();
            }
        }
        int top()
        {
            if(!v.empty())
            {
                return v.back();
            }
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            return v.empty();
        }

};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);    
    cout << st.top() << endl; 
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    cout << endl;

    myStack inputtedstack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        inputtedstack.push(x);
    }
    while(inputtedstack.empty() == false)
    {
        cout << inputtedstack.top() << " ";
        inputtedstack.pop();
    }

    return 0;
}