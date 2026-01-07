#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }

};

void print_forward(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_any_pos(Node* &head, int idx, int val) {
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = tmp->next;
    newnode->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;            
    
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    insert_at_any_pos(head, 1, 100);
    insert_at_any_pos(head, 2, 500);
    print_forward(head);

    return 0;
}