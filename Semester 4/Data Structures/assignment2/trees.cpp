#include <iostream>
using namespace std;
class trees
{

public:
    int data;
    trees *left;
    trees *right;
};
trees *create(int data)
{
    trees *p = new trees();
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}
int Traversals()
{
    int number;
    cout << "\t Traversals" << endl;
    cout << "1. InOrder" << endl;
    cout << "2. PreOrder" << endl;
    cout << "3. PostOrder" << endl;
    cout << "4. LevelOrder" << endl;
    cout << "\nEnter your choice: ";
    cin >> number;
    return number;
}
int Functions()
{
    int number;
    cout << "\n\t Functions" << endl;
    cout << "1. Parent Node" << endl;
    cout << "2. Depth/Level of a given Node" << endl;
    cout << "3. Height of tree" << endl;
    cout << "4. Nodes Level" << endl;
    cout << "5. Total number of nodes" << endl;
    cout << "\nEnter your choice: ";
    cin >> number;
    return number;
}
void InOrder(trees *p)
{

    if (p != NULL)
    {
        InOrder(p->left);
        cout << p->data << " ";

        InOrder(p->right);
    }
}

void PreOrder(trees *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        PreOrder(p->left);
        PreOrder(p->right);
    }
}

void PostOrder(trees *p)
{
    if (p != NULL)
    {
        PostOrder(p->left);
        PostOrder(p->right);
        cout << p->data << " ";
    }
}
void print(trees *p)
{
    cout << p->data;
}
bool printLevel(trees *root, int level)
{
    if (root == NULL)
    {
        return false;
    }

    if (level == 1)
    {
        cout << root->data << " ";

        return true;
    }

    bool left = printLevel(root->left, level - 1);
    bool right = printLevel(root->right, level - 1);

    return left || right;
}

void levelOrderTraversal(trees *root)
{
    int level = 1;

    while (printLevel(root, level))
    {
        level++;
    }
}
void binarySearch(trees *new_node)
{
    trees *root;
    if (root == NULL)
    {
        root = new_node;
        cout << "Value Inserted as root node!" << endl;
    }
    else
    {
        trees *temp = root;
        while (temp != NULL)
        {
            if (new_node->data == temp->data)
            {
                cout << "Value Already exist,"
                     << "Insert another value!" << endl;
                return;
            }
            else if ((new_node->data < temp->data) && (temp->left == NULL))
            {
                temp->left = new_node;
                cout << "Value Inserted to the left!" << endl;
                break;
            }
            else if (new_node->data < temp->data)
            {
                temp = temp->left;
            }
            else if ((new_node->data > temp->data) && (temp->right == NULL))
            {
                temp->right = new_node;
                cout << "Value Inserted to the right!" << endl;
                break;
            }
            else
            {
                temp = temp->right;
            }
        }
    }

    // if (root == NULL)
    // {
    //     root = p;
    //     cout << "Insertion successful" << endl;
    //     return root;
    // }
    // if (p->data < root->data)
    // {
    //     root->left = binarySearch(root->left, p);
    // }
    // else if (p->data > root->data)
    // {
    //     root->right = binarySearch(root->right, p);
    // }
    // else
    // {
    //     cout << "No duplicate values allowed." << endl;
    //     return root;
    // }
    // return root;

    // trees *prev = NULL;

    // while (root != NULL)
    // {
    //     prev = root;
    //     if (root->data == key)
    //     {
    //         cout << "Cannot Enter data, it is already presented." << endl;
    //         return;
    //     }
    //     else if (root->data < key)
    //     {
    //         root = root->left;
    //     }
    //     else
    //     {
    //         root = root->right;
    //     }
    // }
    // trees *next = create(key);
    // if (key < prev->data)
    // {
    //     prev->left = next;
    // }
    // else
    // {
    //     prev->right = next;
    // }
}
int main()
{
    int numberOfNodes;
    char choice;
    int key;
    cout << "Enter data in root: ";
    cin >> key;
    trees *p = create(key);
    trees *root = NULL;
    do
    {
        cout << "Enter data in node: ";
        cin >> key;

        binarySearch(p);

        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    switch (Traversals())
    {
    case 1:
        InOrder(p);
        break;
    case 2:
        PreOrder(p);
        break;
    case 3:
        PostOrder(p);
        break;
    case 4:
        levelOrderTraversal(p);
        break;

    default:
        break;
    }

    // switch (Functions())
    // {
    // case 1:

    //     break;
    // case 2:

    //     break;

    // case 3:

    //     break;

    // case 4:

    //     break;

    // case 5:
    //     cout << "Total number of nodes: " << numberOfNodes << endl;
    //     break;

    // default:
    //     break;
    // }
    return 0;
}
