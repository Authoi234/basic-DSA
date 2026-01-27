#include <bits/stdc++.h>
using namespace std;

void print(int x, string st)
{
    cout << x << st;
}

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_left_values(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left)
    {
        print_left_values(root->left);
        print(root->val, " ");
    }
    else
    {
        print_left_values(root->right);
        print(root->val, " ");
    }
}
void print_right_values(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->val, " ");
    if (root->right)
    {
        print_right_values(root->right);
    }
    else
    {
        print_right_values(root->left);
    }
}

int main()
{
    Node *root = input_tree();
    if (root)
    {
        print_left_values(root->left);
        print(root->val, " ");
        print_right_values(root->right);
    }
    return 0;
}