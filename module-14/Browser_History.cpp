#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        tail = newnode;
        head = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    Node *current = head;
    while (q--){
        string command;
        cin >> command;
        if (command == "visit"){
            string address;
            cin >> address;
            Node *tmp = head;
            bool found = false;
            while (tmp != NULL){
                if (tmp->val == address){
                    cout << tmp->val << endl;
                    current = tmp;
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (!found){
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next"){
            if (current->next != NULL){
                current = current->next;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev"){
            if (current->prev != NULL){
                current = current->prev;
                cout << current->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}