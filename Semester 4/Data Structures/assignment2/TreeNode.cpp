#include <iostream>
using namespace std;
class TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

public:
    TreeNode()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
            left = NULL;
        }
        if (right != NULL)
        {
            delete right;
            right = NULL;
        }
    }
    void setData(int val)
    {
        data = val;
    }
    void setLeft(TreeNode *l)
    {
        left = l;
    }
    void setRight(TreeNode *r)
    {
        right = r;
    }
    int getData() const
    {
        return data;
    }
    TreeNode *getLeft() const
    {
        return left;
    }
    TreeNode *getRight() const
    {
        return right;
    }
};
class BinarySearchTree
{
    TreeNode *root;

public:
    BinarySearchTree()
    {
        root = NULL;
    }
    BinarySearchTree(TreeNode *n)
    {
        root = n;
    }
    ~BinarySearchTree()
    {
        if (root != NULL)
        {
            delete root;
            root = NULL;
        }
    }
    void setRoot(TreeNode *n)
    {
        root = n;
    }
    TreeNode *getRoot() const
    {
        return root;
    }
    void insertNode(int val)
    {
        TreeNode *node = new TreeNode(val);

        if (root == NULL)
        {
            root = node;
        }
        else
        {
            TreeNode *temp = root;
            TreeNode *store = NULL;
            while (temp != NULL)
            {
                store = temp;

                if (val > temp->getData())
                {
                    temp = temp->getRight();
                }
                else if (val < temp->getData())
                {
                    temp = temp->getLeft();
                }
                else
                {
                    cout << "NO DUPLICATES ALLOWED" << endl;
                    return;
                }
            }

            if (val > store->getData())
            {
                store->setRight(node);
            }
            else
            {
                store->setLeft(node);
            }
        }
    }
    void inOrder(TreeNode *obj)
    {
        if (obj == NULL)
        {
            return;
        }
        else
        {
            inOrder(obj->getLeft());
            cout << obj->getData() << " ";
            inOrder(obj->getRight());
        }
    }
    void preOrder(TreeNode *obj)
    {
        if (obj == NULL)
        {
            return;
        }
        else
        {
            cout << obj->getData() << " ";
            preOrder(obj->getLeft());
            preOrder(obj->getRight());
        }
    }
    void postOrder(TreeNode *obj)
    {
        if (obj == NULL)
        {
            return;
        }
        else
        {
            postOrder(obj->getLeft());
            postOrder(obj->getRight());
            cout << obj->getData() << " ";
        }
    }
    int helperHeight(TreeNode *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else if (r->getLeft() == NULL && r->getRight() == NULL)
        {
            return 0;
        }
        else
        {
            static int leftHeight = 0;
            static int rightHeight = 0;

            leftHeight = helperHeight(r->getLeft());
            rightHeight = helperHeight(r->getRight());

            if (leftHeight > rightHeight)
            {
                return leftHeight + 1;
            }
            else
            {
                return rightHeight + 1;
            }
        }
    }
    void helperLevelOrder(TreeNode *r, int levels)
    {
        if (r == NULL)
        {
            return;
        }
        else if (levels == 0)
        {
            cout << r->getData() << " ";
        }
        else
        {
            helperLevelOrder(r->getLeft(), levels - 1);
            helperLevelOrder(r->getRight(), levels - 1);
        }
    }
    // calls the helper functions
    void levelOrderTraversal()
    {
        int h = helperHeight(root);
        for (int i = 0; i <= h; i++)
        {
            helperLevelOrder(root, i);
        }
    }
    int returnParent(int n, TreeNode *root)
    {
        if (root == NULL)
        {
            return -1;
        }
        else if (root->getData() == n)
        {
            return root->getData();
        }
        else
        {
            TreeNode *temp = root;
            TreeNode *store = NULL;
            while (temp->getLeft() != NULL || temp->getRight() != NULL)
            {
                store = temp;

                if (n > temp->getData())
                {
                    temp = temp->getRight();
                }
                else if (n < temp->getData())
                {
                    temp = temp->getLeft();
                }
            }

            return store->getData();
        }
    }
    int helperGetLevel(TreeNode *root, int data, int level)
    {
        if (root == NULL)
        {
            return 0;
        }
        else if (root->getData() == data)
        {
            return level;
        }

        int lowerLevel = helperGetLevel(root->getLeft(), data, level + 1);

        if (lowerLevel != 0)
        {
            return lowerLevel;
        }

        lowerLevel = helperGetLevel(root->getRight(), data, level + 1);

        return lowerLevel;
    }
    int getLevel(TreeNode *root, int data)
    {
        return helperGetLevel(root, data, 1);
    }
    bool isSameLevel(int data, int data1)
    {
        bool flag = false;

        if ((getLevel(this->root, data)) == (getLevel(this->root, data1)))
        {
            flag = true;
        }
        return flag;
    }
    void display(TreeNode *root, int space)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            space = space + 5;
            display(root->getRight(), space);
            cout << endl;
            for (int i = 5; i < space; i++)
            {
                cout << " ";
            }
            cout << root->getData() << endl;

            display(root->getLeft(), space);
        }
    }
};

void displayOfMenu()
{
    cout.flush();
    cout << "1. Insert a node in the Binary Search Tree" << endl;
    cout << "2. Inorder Traversal" << endl;
    cout << "3. Preorder Traversal" << endl;
    cout << "4. Postorder Traversal" << endl;
    cout << "5. Levelorder Traversal" << endl;
    cout << "6. Check height of the tree" << endl;
    cout << "7. Check level of a node" << endl;
    cout << "8. Get Parent of a node" << endl;
    cout << "Enter your choice: ";
}
void menu()
{
    BinarySearchTree obj;
    do
    {
        displayOfMenu();
        int choice = 0;
        cin >> choice;
        cout.flush();
        system("cls");
        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter data to insert: ";
            cin >> data;
            obj.insertNode(data);
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 2:
            cout << "Inorder Traversal: ";
            obj.inOrder(obj.getRoot());
            cout << endl;
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 3:
            cout << "Preorder Traversal: ";
            obj.preOrder(obj.getRoot());
            cout << endl;
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 4:
            cout << "Postorder Traversal: ";
            obj.postOrder(obj.getRoot());
            cout << endl;
            cout.flush();
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "Levelorder Traversal: ";
            obj.levelOrderTraversal();
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 6:
            cout << "Height of the tree is: " << obj.helperHeight(obj.getRoot()) << endl;
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 7:
            int d;
            cout << "Enter the data of node to check its level: ";
            cin >> d;
            cout << endl
                 << "Level of node with data " << d << " is: " << obj.getLevel(obj.getRoot(), d) << endl;
            cout.flush();
            system("pause");
            system("cls");
            break;

        case 8:
            int da;
            cout << "Enter data of a node to check its parent: ";
            cin >> da;
            cout << "Parent of " << da << " is: " << obj.returnParent(da, obj.getRoot());
            cout.flush();
            system("pause");
            system("cls");
            break;
        }
    } while (true);
}

int main()
{
    menu();
}