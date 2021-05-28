#include <iostream>
using namespace std;
class QueueArray
{

public:
    int front = 0;
    int rear = 0;
    int size = 50;
    int *queue = new int[size];
    bool isEmpty()
    {
        return front < 0 || front > rear;
    }
    bool isFull()
    {
        return rear == size - 1;
    }
    void enqueu(int data)
    {
        if (!isFull())
        {
            queue[rear++] = data;
        }
    }
    void dequeu()
    {
        if (!isEmpty())
        {
            ++front;
        }
    }
    void display()
    {
        cout << "Front: " << front << endl;
        cout << "Rear: " << rear << endl;
        cout << "Queue: ";
        for (int i = front; i < rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

// int main()
// {

//     QueueArray queue;
//     for (int i = 0; i < 5; i++)
//     {
//         queue.enqueu(i + 1);
//     }
//     queue.display();
//     queue.dequeu();
//     queue.display();

//     return 0;
// }
