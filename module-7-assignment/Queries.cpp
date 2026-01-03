#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
    {
        head = new Node(val);
        tail = head;
        return;
    }
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void delete_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL || idx < 0) return;

    if (idx == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        if (tmp->next == NULL)
            return;
        tmp = tmp->next;
    }

    if (tmp->next == NULL) return;

    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
    if (tmp->next == NULL) tail = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int T;
    cin >> T;
    while (T--)
    {
        int x, y;
        cin >> x >> y;

        switch (x)
        {
        case 0:
            insert_at_head(head, tail, y);
            print_linked_list(head);
            cout << endl;
            break;
        case 1:
            insert_at_tail(head, tail, y);
            print_linked_list(head);
            cout << endl;
            break;
        case 2:
            delete_at_any_pos(head, tail, y);
            print_linked_list(head);
            cout << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}