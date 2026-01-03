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

void remove_duplicates(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        Node *j = temp;
        while (j->next != NULL)
        {
            if (temp->val == j->next->val)
            {
                Node *delete_node = j->next;
                j->next = j->next->next;
                if (delete_node == tail)
                {
                    tail = j;
                }
                delete delete_node;
            }
            else
            {
                j = j->next;
            }
        }
        temp = temp->next;
    };
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head, tail);

    print_linked_list(head);

    return 0;
}