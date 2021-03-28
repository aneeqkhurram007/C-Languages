#include <iostream>
using namespace std;
class DeleteLinkedList
{

public:
    int data;
    DeleteLinkedList *next;
};
DeleteLinkedList *create(DeleteLinkedList *head, int data)
{
    DeleteLinkedList *ptr = new DeleteLinkedList();
    DeleteLinkedList *temp = head;
    ptr->data = data;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    ptr->next = NULL;
    temp->next = ptr;
    return head;
}
void traversal(DeleteLinkedList *head)
{
    DeleteLinkedList *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
DeleteLinkedList *deletion(DeleteLinkedList *head, int index)
{
    DeleteLinkedList *ptr = head;
    DeleteLinkedList *qtr = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = qtr->next;
    delete qtr;

    return head;
}
int main()
{
    DeleteLinkedList *head = new DeleteLinkedList();
    //Create LinkedList
    for (int i = 0; i < 10; i++)
    {
        head = create(head, i + 1);
    }
    traversal(head);
    //deletion in LinkedList
    head = deletion(head, 2);
    traversal(head);
    return 0;
}