#include <iostream>
using namespace std;
class PriorityQueues
{
public:
    int data;
    PriorityQueues *next;
    int front;
    int rear;
};

void enqueue(PriorityQueues *head, int data)
{

    PriorityQueues *p = new PriorityQueues();
    p->data = head->data;
    p->next = head->next;
    head->next = p;
    head->data = data;
}

void traversal(PriorityQueues *head)
{
    PriorityQueues *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // cout << temp->data << endl;
}

bool isEmpty(PriorityQueues *q)
{
    return q->next == NULL;
}

void dequeue(PriorityQueues *q)
{
    if (isEmpty(q))
    {
        return;
    }
    else
    {
        PriorityQueues *p = q;
        PriorityQueues *ptr = q->next;
        while (ptr->next != NULL)
        {
            p = p->next;
            ptr = ptr->next;
        }
        p->next = ptr->next;
        delete ptr;
    }
}
void priorityEnqueue(PriorityQueues *head, int data)
{
    enqueue(head, data);

    PriorityQueues *q = head;

    PriorityQueues *temp = head;
    while (temp->next != NULL)
    {
        if (q->data < temp->data)
        {
            int pData = q->data;
            q->data = temp->data;
            temp->data = pData;

            q = q->next;
        }
        temp = temp->next;
    }
}
void priorityDequeue(PriorityQueues *head)
{
    if (isEmpty(head))
    {
        return;
    }
    else
    {
        PriorityQueues *p = head;
        PriorityQueues *ptr = head->next;

        // PriorityQueues *q = head;

        while (ptr->next != NULL)
        {
            if (p->data < ptr->data)
            {
                int pData = p->data;
                p->data = ptr->data;
                ptr->data = pData;
            }

            p = p->next;
            ptr = ptr->next;
        }
        p->next = ptr->next;
        delete ptr;
    }
}
int main()
{
    PriorityQueues *head = new PriorityQueues();
    head->front = -1;
    head->rear = -1;

    for (int i = 0; i < 5; i++)
    {
        priorityEnqueue(head, i + 2);
    }
    traversal(head);

    priorityEnqueue(head, 1);

    traversal(head);

    priorityDequeue(head);

    priorityDequeue(head);
    traversal(head);

    return 0;
}