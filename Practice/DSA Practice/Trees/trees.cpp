#include <iostream>
using namespace std;
class trees
{

public:
    int data;
    trees *leftChild;
    trees *rightChild;
};
class BST
{

public:
    trees *root = NULL;
    bool isEmpty()
    {
        return root == NULL;
    }
    void inOrder(trees *p)
    {
        inOrder(p->leftChild);
        cout << p->data << " ";
        inOrder(p->rightChild);
    }

    void createNode(int data)
    {
        if (isEmpty())
        {
            root = new trees;
            root->data = data;
            root->leftChild = NULL;
            root->rightChild = NULL;
        }
        else
        {
            trees *p = new trees;
            p->data = data;
            trees *ptr = root;
            if (data > ptr->data && ptr->rightChild == NULL)
            {
                ptr->rightChild = p;
            }
            else if (data < ptr->data && ptr->leftChild == NULL)
            {
                ptr->leftChild = p;
            }
            root = p;
        }
        inOrder(root);
    }
};
int main()
{
    BST tree;
    tree.createNode(6);
    tree.createNode(4);
    tree.createNode(7);
    tree.createNode(5);
    tree.createNode(3);

    return 0;
}