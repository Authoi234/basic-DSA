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

class DoublyLinkedList
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    int size()
    {
        return sz;
    }
    // I tried to optimize the insert at any pos which is in module
    void insert_at_any_pos(int idx, int val)
    {
        if (idx < 0 || idx > sz)
            return;

        Node *newnode = new Node(val);
        sz++;

        // O(1)
        if (idx == 0)
        {
            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
                head = tail;
            }
            else
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
            return;
        }

        //  O(1)
        if (idx == sz - 1)
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            return;
        }

        //  O(n)
        Node *tmp = head;
        for (int i = 1; i < idx; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        newnode->prev = tmp;
        tmp->next->prev = newnode;
        tmp->next = newnode;
    }

    void print_forward()
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }

    void print_backwards()
    {
        Node *tmp = tail;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->prev;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    int size = 0;
    DoublyLinkedList dll;
    while (t--)
    {
        int index, value;
        cin >> index >> value;
        if (index > dll.size() || index < 0)
        {
            cout << "Invalid" << endl;
            continue;
        }
        dll.insert_at_any_pos(index, value);
        cout << "L -> ";
        dll.print_forward();
        cout << endl << "R -> ";
        dll.print_backwards();
        cout << endl;
    }
    return 0;
}