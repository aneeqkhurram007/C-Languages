#include <iostream>
using namespace std;
class trees
{

public:
    int data;
    trees *leftChild;
    trees *rightChild;
};

void inOrder(trees *root)
{
    if (root == NULL)
    {

        return;
    }

    inOrder(root->leftChild);
    cout << root->data << " ";
    inOrder(root->rightChild);
}

trees *createNode(trees *root, int data)
{

    if (root == NULL)
    {

        root = new trees;
        root->data = data;
        root->leftChild = NULL;
        root->rightChild = NULL;
    }
    else if (data > root->data)
    {
        root->rightChild = createNode(root->rightChild, data);
    }
    else
    {
        root->leftChild = createNode(root->leftChild, data);
    }
    return root;
}
void search(trees *root, int data)
{
    int flag = 1;
    trees *ptr = root;
    while (ptr != NULL)
    {
        if (data == ptr->data)
        {
            cout << "\nValue found" << endl;
            flag = 0;
            break;
        }
        else if (data > ptr->data)
        {
            ptr = ptr->rightChild;
        }
        else
        {
            ptr = ptr->leftChild;
        }
    }
    if (flag)
    {
        cout << "\nValue not found" << endl;
    }
}
trees *minValue(trees *root)
{
    while (root->leftChild != NULL)
    {
        root = root->leftChild;
    }
    return root;
}
trees *remove(trees *root, int data)
{
    if (root == NULL)
    {
        cout << "Cannot delete from null tree." << endl;
    }
    else if (data == root->data)
    {
        if (root->leftChild == NULL && root->rightChild == NULL)
        {
            return NULL;
        }
        else if (root->leftChild == NULL)
        {
            trees *temp = root->rightChild;
            delete[] root;
            root = NULL;
            root = temp;
        }
        else if (root->rightChild == NULL)
        {
            trees *temp = root->leftChild;
            delete[] root;
            root = NULL;
            root = temp;
        }
        else
        {
            trees *succ = minValue(root->rightChild);
            root->data = succ->data;
            root->rightChild = remove(root->rightChild, data);
        }
    }
    else if (data > root->data)
    {
        root->rightChild = remove(root->rightChild, data);
    }
    else
    {
        root->leftChild = remove(root->leftChild, data);
    }

    return root;
}
int main()
{

    trees *root = NULL;
    root = createNode(root, 6);
    createNode(root, 4);
    createNode(root, 7);
    createNode(root, 5);
    createNode(root, 3);
    inOrder(root);
    search(root, 5);
    search(root, 15);
    remove(root, 15);
    remove(root, 7);
    inOrder(root);

    return 0;
}