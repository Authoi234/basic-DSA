#include <bits/stdc++.h>
using namespace std;

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

class Authoi_s_Binary_Tree
{
public:
    Node *root;
    int nodes_count = 0;
    //  It is private , belive me!
    int DEPTH__FINDER(Node *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(DEPTH__FINDER(root->left), DEPTH__FINDER(root->right));
    }
    //

    Node *input_tree()
    {
        int val;
        cin >> val;
        if (val == -1)
            root = NULL;
        else
        {
            root = new Node(val);
            nodes_count++;
        }

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
            {
                myleft = new Node(l);
                nodes_count++;
            }
            if (r == -1)
                myright = NULL;
            else
            {
                myright = new Node(r);
                nodes_count++;
            }
            p->left = myleft;
            p->right = myright;
            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }
        return root;
    };

    int depth()
    {
        return DEPTH__FINDER(root);
    }
};

class Calculation
{
public:
    string command;
    int lhs;
    int rhs;
    string thenPrint;
    string elsePrint;

    Calculation(string command, int lhs, int rhs, string thenPrint, string elsePrint)
    {
        this->command = command;
        this->lhs = lhs;
        this->rhs = rhs;
        this->thenPrint = thenPrint;
        this->elsePrint = elsePrint;
    }

    void execute()
    {
        if (command == "COMPARE")
        {
            if (lhs == rhs)
                cout << thenPrint << endl;
            else
                cout << elsePrint << endl;
        }
    }
};

int main()
{
    Authoi_s_Binary_Tree myTree = Authoi_s_Binary_Tree();
    myTree.input_tree();
    int depth = myTree.depth();
    int nodes = myTree.nodes_count;
    Calculation c("COMPARE", nodes, pow(2, depth) - 1, "YES", "NO");
    c.execute();
    return 0;
}