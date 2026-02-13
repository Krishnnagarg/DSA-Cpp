#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;  // store left child
    Node *right; // store right child

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1; // Static use bcoz recursion call me value reset naa ho

Node *buildTree(vector<int> preorder) // time complexity = O(n)
{
    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// PreOrder Traversal : Root -> Left subtree -> Right subtree
void displayPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    displayPreorder(root->left);
    displayPreorder(root->right);
}

// InOrder Traversal : Left subtree -> Root -> Right subtree
void displayInorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    displayInorder(root->left);
    cout << root->data << " ";
    displayInorder(root->right);
}

// PostOrder Traversal : Left subtree -> Right subtree -> Root
void displayPostorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    displayPostorder(root->left);
    displayPostorder(root->right);
    cout << root->data << " ";
}

// // Level Order Traversing
// void displayLevelorder(Node *root)
// {
    //     if (root == NULL)
    // {
    //     return;
    // }
//     queue<Node*> q;

//     q.push(root);
//     while (q.size()> 0)
//     {
//         Node *curr = q.front();
//         q.pop();
//         cout << curr->data << " ";

//         if (curr->left != NULL)
//         {
//             q.push(curr->left);
//         }
//         if (curr->right != NULL)
//         {
//             q.push(curr->right);
//         }
//     }
//     cout << endl;
// }

// Level Order Traversing
void displayLevelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // NULL is used for level separator

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }
        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preorder); // function call
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl;

    displayPreorder(root);
    cout << endl;

    displayInorder(root);
    cout << endl;

    displayPostorder(root);
    cout << endl;

    displayLevelorder(root);
    cout << endl;

    return 0;
}
