#include <iostream>
using namespace std;
class insertion
{

public:
    int data;
    insertion *left;
    insertion *right;
};
insertion *create(int data)
{
    insertion *node = new insertion();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
class queue
{
public:
    insertion *data;
    queue *next;
};
void enqueue(queue *head, insertion *data)
{
    queue *p = new queue;
    p->data = head->data;
    p->next = head->next;
    head->data = data;
    head->next = p;
}

void dequeue(queue *head)
{

    if (head == NULL)
    {
        return;
    }
    else
    {
        queue *p = head;
        queue *ptr = head->next;
        while (ptr->next != NULL)
        {
            p = p->next;
            ptr = ptr->next;
        }
        p->next = ptr->next;
        delete ptr;
    }
}
void insert(insertion *root, int data)
{

    insertion *temp = root;

    if (temp->data > data && temp->left == NULL)
    {
        temp->left = create(data);
    }
    else if (temp->data > data && temp->left != NULL)
    {
        insert(temp->left, data);
    }
    else if (temp->data < data && temp->right == NULL)
    {
        temp->right = create(data);
    }
    else if (temp->data < data && temp->right != NULL)
    {
        insert(temp->right, data);
    }
    else
    {
        cout << "No dupliacte values." << endl;
    }
}
// /* Compute the "height" of a tree -- the number of
//     nodes along the longest path from the root node
//     down to the farthest leaf node.*/
// int height(insertion *node)
// {
//     if (node == NULL)
//         return 0;
//     else
//     {
//         /* compute the height of each subtree */
//         int lheight = height(node->left);
//         int rheight = height(node->right);

//         /* use the larger one */
//         if (lheight > rheight)
//             return (lheight + 1);
//         else
//             return (rheight + 1);
//     }
// }

// void getLevel(insertion *root, int level)
// {
//     if (level == 0 || root == NULL)
//     {
//         return;
//     }
//     else if (level == 1)
//     {
//         cout << root->data << " ";
//     }

//     else
//     {
//         getLevel(root->left, level - 1);
//         getLevel(root->right, level - 1);
//     }
// }

void levelOrder(insertion *root)
{
    // int h = height(root);
    if (root == NULL)
    {
        return;
    }
    else
    {
        queue *head = new queue;
        insertion *temp;
        enqueue(head, root);
        while (head != NULL)
        {
            temp = head->data;
            dequeue(head);

            if (temp == NULL)
            {
                enqueue(head, NULL);
                cout << "\n";
            }
            else
            {
                if (temp->left)
                {
                    enqueue(head, temp->left);
                }
                else if (temp->right)
                {
                    enqueue(head, temp->right);
                }
                cout << temp->data << " ";
            }
        }
    }
}
void traversal(insertion *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        traversal(root->left);
        cout << root->data << " ";
        traversal(root->right);
    }
}

int main()
{
    insertion *root = NULL;
    int data;
    cout << "Enter data: ";
    cin >> data;
    root = create(data);
    int i = 0;
    while (i < 5)
    {
        cout << "Enter data: ";
        cin >> data;
        insert(root, data);
        i++;
    }
    levelOrder(root);
    // traversal(root);
}