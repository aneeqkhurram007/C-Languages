#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bst2
{

public:
    int data;
    bst2 *left = NULL;
    bst2 *right = NULL;
};
bst2 *insert(bst2 *root, int data)
{
    if (root == NULL)
    {
        root = new bst2;
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}
void inOrder(bst2 *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(bst2 *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(bst2 *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
int height(bst2 *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    if (lheight > rheight)
    {
        return lheight + 1;
    }
    else
    {
        return rheight + 1;
    }
}
void printCurrentLevel(bst2 *root, int height)
{
    if (root == NULL)
    {
        return;
    }
    if (height == 1)
    {
        cout << root->data << " ";
    }
    else if (height > 1)
    {
        printCurrentLevel(root->left, height - 1);
        printCurrentLevel(root->right, height - 1);
    }
}
void printLevelOrder(bst2 *root)
{
    int h = height(root);
    for (int i = 1; i <= h; i++)
    {
        printCurrentLevel(root, i);
    }
}

void printLevelQueues(bst2 *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<bst2 *> q;
    q.push(root);
    while (q.empty() == false)
    {
        bst2 *node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left != NULL)
        {
            q.push(node->left);
        }
        if (node->right != NULL)
        {
            q.push(node->right);
        }
    }
}
void parentNode(bst2 *root, int data, int parent)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == data)
    {
        cout << parent;
    }
    else
    {
        parentNode(root->left, data, root->data);
        parentNode(root->right, data, root->data);
    }
}
void search(bst2 *root, int data)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == data)
    {
        cout << "Node Found" << root->data;
    }
    else
    {
        search(root->left, data);
        search(root->right, data);
    }
}
void parent(bst2 *root, int data)
{
    if (root == NULL)
    {
        return;
    }
    bst2 *tempParent;
    bst2 *temp = root;
    while (temp != NULL)
    {
        tempParent = temp;
        if (data < temp->data)
        {
            temp = temp->left;
        }
        else if (data > temp->data)
        {
            temp = temp->right;
        }
        if (temp->data == data)
        {
            cout << "\nParent 2: " << tempParent->data;
            break;
        }
    }
}

int levelOfNode(bst2 *root, int node)
{
    int level = 0;
    do
    {
        level++;
        if (root->data == node)
        {
            cout << "\nLevel of Node: " << level;
            break;
        }
        else if (node > root->data)
        {
            root = root->right;
        }
        else if (node < root->data)
        {
            root = root->left;
        }

    } while (root != NULL);
    return level;
}
int main()
{
    bst2 *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 75);
    cout << "InOrder: ";
    inOrder(root);
    cout << "\nPreOrder: ";
    preOrder(root);
    cout << "\nPostOrder: ";
    postOrder(root);
    cout << "\nLevel Order: ";
    printLevelOrder(root);
    cout << "\n";
    printLevelQueues(root);
    cout << "\nParent: ";
    parentNode(root, 80, -1);
    parent(root, 80);
    levelOfNode(root, 75);

    return 0;
}