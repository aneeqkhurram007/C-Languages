#include <iostream>
using namespace std;
class avl
{

public:
    int data;
    avl *left = NULL;
    avl *right = NULL;
    int height;
};

int height(avl *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int getBalance(avl *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}

avl *rightRotate(avl *y)
{

    avl *x = y->left;
    avl *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
avl *leftRotate(avl *x)
{
    avl *y = x->right;
    avl *T1 = y->left;

    y->left = x;
    x->right = T1;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return y;
}

avl *insertion(avl *root, int data)
{
    if (root == NULL)
    {
        root = new avl;
        root->data = data;
        root->left = root->right = NULL;
        root->height = 1;
        return root;
    }
    else if (data > root->data)
    {
        root->right = insertion(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = insertion(root->left, data);
    }
    else
    {
        return root;
    }
    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);
    if (balance > 1 && data < root->left->data)
    {
        return rightRotate(root);
    }
    if (balance < -1 && data > root->right->data)
    {
        return leftRotate(root);
    }
    if (balance > 1 && data > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && data < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void traversal(avl *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    traversal(root->left);
    traversal(root->right);
}

avl *minNode(avl *root)
{
    if (root)
    {
        while (root->left != NULL)
        {
            root = root->left;
        }
    }
    return root;
}

avl *deletion(avl *root, int data)
{
    if (data > root->data)
    {
        root->right = deletion(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = deletion(root->left, data);
    }
    else if (root == NULL)
    {
        cout << "Cannot delete from NULL node." << endl;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete[] root;
            root = NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            avl *temp = root->right;
            delete[] root;
            root = temp;
        }
        else if (root->right == NULL && root->left != NULL)
        {
            avl *temp = root->left;
            delete[] root;
            root = temp;
        }
        else
        {
            avl *temp = minNode(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}

int main()
{
    avl *root = NULL;

    /* Constructing tree given in
    the above figure */
    root = insertion(root, 10);
    root = insertion(root, 20);
    root = insertion(root, 30);
    root = insertion(root, 40);
    root = insertion(root, 50);
    root = insertion(root, 25);

    /* The constructed AVL Tree would be
                30
            / \
            20 40
            / \ \
        10 25 50
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";
    traversal(root);

    return 0;
}