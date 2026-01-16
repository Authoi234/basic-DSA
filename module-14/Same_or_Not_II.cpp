#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }

    int back()
    {
        return tail->val;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    myStack A;
    Queue B;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        A.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        B.push(val);
    }

    bool flag = true;
    while (!A.empty() && !B.empty())
    {
        if (A.top() != B.front())
        {
            flag = false;
            break;
        }
        A.pop();
        B.pop();
    }
    if (flag == true && A.empty() && B.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}