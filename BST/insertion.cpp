// C++ program to insert a node
// in a BST
#include <bits/stdc++.h>
using namespace std;

class bstnode
{
public:
    int data;
    bstnode *left;
    bstnode *right;

    bstnode(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

bstnode *insertIntobst(bstnode *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new bstnode(d); // new node bna ke us mai data
                               // daal dena
        return root;
    }
    if (d > root->data)
    {
        // right part mai insert karna hai
        root->right = insertIntobst(root->right, d);
    }
    else
    {
        // left part mai insert karna hai
        root->left = insertIntobst(root->left, d);
    }
    return root;
}

void takeInput(bstnode *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntobst(root, data);
        cin >> data;
    }
}
void levelOrderTraversal(bstnode *root)
{
    queue<bstnode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        bstnode *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                // queque still has some chid nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// various different types of traversels

//(root left right)
void preorderTraversal(bstnode *root)
{
    // base case
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// left root right
void inorderTraversal(bstnode *root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// left right root
void postorderTraversal(bstnode *root)
{
    // base condition
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    bstnode *root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);
    cout << "Printing the bst" << endl;
    levelOrderTraversal(root);

    cout << "preordertraversal"
         << endl;
    preorderTraversal(root);

    cout << "inordertraversal"
         << endl;
    inorderTraversal(root);
    cout << "postordertraversal"
         << endl;
    postorderTraversal(root);
    return 0;
}