#include <iostream>
using namespace std;
class LinkedList
{
public:
    int data;
    LinkedList *next;
};
void traversal(LinkedList *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
LinkedList *insertAtFirst(LinkedList *head, int data)
{
    LinkedList *ptr = new LinkedList();
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
LinkedList *insertInBetween(LinkedList *head, int data, int index)
{
    LinkedList *ptr = new LinkedList();
    LinkedList *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
LinkedList *insertAtEnd(LinkedList *head, int data)
{
    LinkedList *ptr = new LinkedList();
    LinkedList *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

LinkedList *insertAfter(LinkedList *head, LinkedList *prevNode, int data)
{
    LinkedList *ptr = new LinkedList();
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    LinkedList *head = new LinkedList();
    LinkedList *second = new LinkedList();
    LinkedList *third = new LinkedList();
    LinkedList *fourth = new LinkedList();
    head->data = 66;
    head->next = second;

    second->data = 67;
    second->next = third;

    third->data = 68;
    third->next = fourth;

    fourth->data = 69;
    fourth->next = NULL;

    // head = insertAtFirst(head, 65);
    // head = insertInBetween(head, 65, 2);
    // head = insertAtEnd(head, 70);

    traversal(head);

    return 0;
}