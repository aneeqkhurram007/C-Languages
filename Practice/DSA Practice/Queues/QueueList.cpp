#include <iostream>
using namespace std;

class List
{
public:
    int data;
    List *next;
};
class QueueList
{

public:
    List *front = NULL;
    List *rear = NULL;
    bool isEmpty()
    {
        return front == NULL && rear == NULL;
    }
    void enqueue(int data)
    {
        if (isEmpty())
        {
            front = new List;
            front->data = data;
            front->next = NULL;
            rear = front;
        }
        else
        {
            List *ptr = new List;
            ptr->data = data;
            ptr->next = rear;
            rear = ptr;
        }
    }
    void dequeue()
    {
        if (!isEmpty())
        {
            List *p = rear;
            List *q = rear->next;
            while (q->next != NULL)
            {
                p = p->next;
                q = q->next;
            }
            p->next = NULL;
            front = p;
            delete[] q;
            q = NULL;
        }
    }
    void traversal()
    {
        List *temp = rear;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};
int main()
{
    QueueList queue;
    queue.enqueue(5);
    queue.enqueue(4);
    queue.enqueue(3);
    queue.enqueue(2);
    queue.traversal();
    queue.dequeue();
    queue.traversal();
    return 0;
}
