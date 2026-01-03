#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;
    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long long int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

long long int search_values(Node *head, string type)
{
    long long int MaxMinValue = (type == "MAX") ? LLONG_MIN : LLONG_MAX;
    Node *temp = head;
    while (temp != NULL)
    {
        if (type == "MAX" && temp->val > MaxMinValue) MaxMinValue = temp->val;
        else if (type == "MIN" && temp->val < MaxMinValue) MaxMinValue = temp->val;
        temp = temp->next;
    }
    return MaxMinValue;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long int value;
    while (1)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    };

    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    cout << search_values(head, "MAX") - search_values(head, "MIN") << endl;

    return 0;
}