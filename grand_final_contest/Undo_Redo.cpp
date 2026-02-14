#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string text = "";
    stack<char> undo_st, redo_st;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "TYPE"){
            char x;
            cin >> x;
            text += x;
            undo_st.push(x);
            while(!redo_st.empty()){
                redo_st.pop();
            }
        }
        else if(s == "UNDO"){
            if(!undo_st.empty()){
                char last_char = undo_st.top();
                undo_st.pop();
                text.pop_back();
                redo_st.push(last_char);
            }
        }
        else if(s == "REDO"){
            if(!redo_st.empty()){
                char char_to_redo = redo_st.top();
                redo_st.pop();
                text += char_to_redo;
                undo_st.push(char_to_redo);
            }
        }
    }
    
    cout << text << endl;
    
    return 0;
}