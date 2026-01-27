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

    Node *input_tree()
    {
        int val;
        cin >> val;
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
    };

    vector<int> giveMeValuesAtLevel(int level)
    {
        queue<pair<Node *, int>> q;
        vector<int> v;
        if (root)
            q.push({root, 0});

        bool found = false;
        while (!q.empty())
        {
            Node *node = q.front().first;
            int curr_level = q.front().second;
            q.pop();

            if (curr_level == level)
            {
                v.push_back(node->val);
                found = true;
            }

            if (curr_level < level)
            {
                if (node->left)
                    q.push({node->left, curr_level + 1});
                if (node->right)
                    q.push({node->right, curr_level + 1});
            }
        }
        vector<int> v2(1, NULL);
        if (!found)
            return v2;
        else{
            return v;
        }
    }
};

int main()
{
    Authoi_s_Binary_Tree myTree = Authoi_s_Binary_Tree();
    myTree.input_tree();

    int level;
    cin >> level;

    vector<int> result = myTree.giveMeValuesAtLevel(level);
    if(result[0] == NULL){
        cout << "Invalid" << endl;
    }
    else{
        for(int x : result){
            cout << x << " ";
        }
    }

    return 0;
}