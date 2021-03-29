#include <iostream>
using namespace std;
class Queue
{
public:
    int size;
    int f;
    int r;
    int *arr;
};
bool isFull(Queue *q)
{
    return q->r == q->size - 1;
}
bool isEmpty(Queue *q)
{
    return q->r == q->f;
}
void enqueue(Queue *q, int val)
{
    if (isFull(q))
    {
        cout << "This Queue is Full" << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
void dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        cout << "The queue is Empty" << endl;
    }
    else
    {
        q->f++;
        }
}
int main()
{
    Queue *q = new Queue;
    q->size = 100;
    q->f = -1;
    q->r = -1;
    q->arr = new int(q->size);
    if (isEmpty(q))
    {
        cout << "Queue is Empty" << endl;
    }

    //Enqueue
    enqueue(q, 12);
    enqueue(q, 15);
    if (isEmpty(q))
    {
        cout << "Queue is Empty" << endl;
    }
    dequeue(q);
    return 0;
}