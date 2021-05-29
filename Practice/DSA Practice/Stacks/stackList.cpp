#include <iostream>
using namespace std;

class List
{
public:
    int data;
    List *next = NULL;
};
class stackList
{
public:
    List *head = NULL;
    bool isEmpty()
    {
        return head == NULL;
    }
    void push(int element)
    {

        if (isEmpty())
        {
            head = new List;
            head->data = element;
            head->next = NULL;
        }
        else
        {
            List *ptr = new List;

            ptr->data = element;
            ptr->next = head;
            head = ptr;
        }
    }
    void pop()
    {
        List *temp = head;
        temp = temp->next;
        delete[] head;
        head = NULL;
        head = temp;
    }
    void display()
    {
        List *ptr = head;

        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << "\n";
    }
};

int main()
{
    stackList stack;
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.display();
    stack.pop();
    stack.display();
    return 0;
}