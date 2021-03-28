#include <iostream>
using namespace std;
class CircularLinkedList
{

public:
    int data;
    CircularLinkedList *next;
};
CircularLinkedList *createCircular(CircularLinkedList *head, int data)
{
    CircularLinkedList *ptr = new CircularLinkedList();
    ptr->data = data;
    CircularLinkedList *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
}
CircularLinkedList *create(CircularLinkedList *head, int data)
{
    CircularLinkedList *ptr = new CircularLinkedList();
    ptr->data = data;
    CircularLinkedList *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}
void traversal(CircularLinkedList *head)
{
    CircularLinkedList *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    CircularLinkedList *head = new CircularLinkedList;
    cout << "Enter data in head: ";
    cin >> head->data;
    head->next = NULL;
    for (int i = 0; i < 10; i++)
    {
        head = create(head, i + 1);
    }
    cout << "Normal List" << endl;
    traversal(head);
    cout << "Circular List" << endl;
    head = createCircular(head, 80);
    traversal(head);
}