#include <iostream>
using namespace std;
class List
{

public:
    char data;
    List *next;
};
class stack
{
public:
    List *top = NULL;
    bool isEmpty()
    {
        return top == NULL;
    }
    void push(char data)
    {
        if (isEmpty())
        {
            top = new List;
            top->data = data;

            top->next = NULL;
        }
        else
        {

            List *ptr = new List;
            ptr->data = data;

            ptr->next = top;
            top = ptr;
        }
    }
    void pop()
    {
        if (!isEmpty())
        {
            top = top->next;
        }
    }
    void traversal()
    {
        List *ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    void palindrome(int i)
    {
        bool flag;
        int start = 0;
        int end = i - 1;
        while (end >= 0)
        {
            flag = false;
            List *ptr = top;
            List *qtr = top;
            for (int j = 0; j < start; j++)
            {
                ptr = ptr->next;
            }
            for (int j = 0; j < end; j++)
            {
                qtr = qtr->next;
            }
            if (ptr->data != qtr->data)
            {
                flag = true;
                break;
            }

            start++;
            end--;
        }
        if (flag == true)
        {
            cout << "\nNot Palindrome." << endl;
        }
        else
        {
            cout << "\nPalindrome." << endl;
        }
    }
};
int main()
{
    char *exp = new char[50];
    cout << "Enter an expression: ";
    cin.getline(exp, 50);
    stack top;
    int i, j;
    for (i = 0, j = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] >= 'A' && exp[i] <= 'Z')
        {
            exp[i] += 32;
        }
        if ((exp[i] >= '0' && exp[i] <= '9') || exp[i] >= 'a' && exp[i] <= 'z')
        {
            top.push(exp[i]);
            j++;
        }
    }
    top.traversal();
    top.palindrome(j);
    return 0;
}