
#include <iostream>
using namespace std;
class stack
{

public:
    int data;
    stack *next;
};

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
    }
    return top;
}

int pop(stack *top)
{
    if (isEmpty(top))
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        stack *tp = top;
        stack *n = tp;
        top = tp->next;
        int x = n->data;
        delete n;
        return x;
    }
}
void traversal(stack *ptr, int TOP)
{
    int count = 0;
    int flag = 0;
    stack *p = ptr;

    while (p != NULL)
    {
        stack *temp = ptr;
        for (int i = 0; i < TOP - count; i++)
        {
            temp = temp->next;
        }
        if (p->data != temp->data)
        {
            flag = 1;
            break;
        }

        p = p->next;
        count++;
    }
    if (flag == 0)
    {
        cout << "\nThe expression you entered is a palindrome" << endl;
    }
    else
    {
        cout << "\nThe expression you entered is not a palindrome" << endl;
    }
}
int main()
{
    cout << "Prepared By: Aneeq Khurram \tRegId: FA19-BCS-145" << endl;
    char *s;
    char choice;
    do
    {
        stack *top = NULL;
        s = new char[50]{'\0'};
        int TOP = -1;
        cout << "\nPlease enter the input expression: ";
        fflush(stdin);
        cin.getline(s, 50);

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
                top = push(top, s[i]);
                TOP++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                top = push(top, s[i]);
                TOP++;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                top = push(top, s[i]);
                TOP++;
            }
        }
        traversal(top, TOP);

        cout << "\nDo you want to continue: ";
        cin >> choice;
        delete top;

    } while (choice == 'y' || choice == 'Y');
    cout << "\nThank you for using this palindrome evaluator" << endl;
    return 0;
}