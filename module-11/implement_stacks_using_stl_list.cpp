#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            if(!l.empty())
            {
                l.pop_back();
            }
        }
        int top()
        {
            if(!l.empty())
            {
                return l.back();
            }
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            return l.empty();
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