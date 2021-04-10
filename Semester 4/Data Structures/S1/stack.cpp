
#include <iostream>
using namespace std;
class stack
{

public:
    int data;
    stack *next;
};

stack *top = NULL;

bool isFull(stack *top)
{
    stack *p = new stack();
    return p == NULL;
}
bool isEmpty(stack *top)
{
    return top == NULL;
}
stack *push(stack *top, int x)
{
    if (isFull(top))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        stack *n = new stack();
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(stack *tp)
{
    if (isEmpty(tp))
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        stack *n = tp;
        top = tp->next;
        int x = n->data;
        delete n;
        return x;
    }
}
void traversal(stack *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    cout << "Prepared By: Aneeq Khurram \tRegId: FA19-BCS-145" << endl;
    char *s = new char(50);
    char choice;
    do
    {
        cout << "\nPlease enter the input expression: ";
        fflush(stdin);
        cin.getline(s, 50);
        int count = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
            if (s[i] >= 97 && s[i] <= 122)
            {
                top = push(top, s[i]);
            }

            count++;
        }

        int flag = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == s[count - i - 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "\nThe expression you entered is a palindrome" << endl;
        }
        else
        {
            cout << "\nThe expression you entered is not a palindrome" << endl;
        }

        cout << "\nDo you want to continue: ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
    cout << "\nThank you for using this palindrome evaluator" << endl;
    return 0;
}