#include <iostream>
using namespace std;

class stackArray
{

public:
    int top = -1;
    int size = 50;
    int *stack = new int[size];
    bool isFull()
    {
        return top == size;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void psuh(int element)
    {
        if (isFull())
        {
            cout << "Cannot psuh more elements. Stack is already Full." << endl;
        }
        else
        {
            top++;
            stack[top] = element;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Cannot pop an element from empty stack." << endl;
        }
        else
        {
            top--;
        }
    }
    void display()
    {
        cout << "\nTop = " << top << endl;
        cout << "Stack = ";
        for (int i = 0; i <= top; i++)
        {
            cout << stack[i] << " ";
        }
    }
};

// int main()
// {
//     stackArray stack;
//     stack.psuh(5);
//     stack.psuh(4);
//     stack.psuh(3);
//     stack.display();
//     stack.pop();
//     stack.display();
// }