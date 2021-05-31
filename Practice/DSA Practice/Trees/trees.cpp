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
    if (!root)
    {

        return;
    }

    inOrder(root->leftChild);
    cout << root->data << " ";
    inOrder(root->rightChild);
}

trees *createNode(trees *root, int data)
{

    if (!root)
    {
        cout << " 0";
        root = new trees;
        root->data = data;
        root->leftChild = NULL;
        root->rightChild = NULL;
    }
    if (data > root->data)
    {
        root->rightChild = createNode(root->rightChild, data);
    }
    else
    {
        root->leftChild = createNode(root->leftChild, data);
    }
    return root;
}

int main()
{

    trees *root = NULL;
    root = createNode(root, 6);
    root = createNode(root, 4);
    // createNode(root, 7);
    // createNode(root, 5);
    // createNode(root, 3);
    inOrder(root);

    return 0;
}