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

    // Belive It is private, dont access
    void collectLeaves(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->val);
            return;
        }
        collectLeaves(root->left, ans);
        collectLeaves(root->right, ans);
    }
    //

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

    vector<int> leaf_nodes()
    {
        vector<int> ans;
        collectLeaves(root, ans);
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
    }
};

int main()
{
    Authoi_s_Binary_Tree myTree = Authoi_s_Binary_Tree();
    myTree.input_tree();
    vector<int> ans = myTree.leaf_nodes();
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << " ";
    }

    return 0;
}