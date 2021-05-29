#include <iostream>
using namespace std;
class stack
{

public:
    int topArr = -1;
    int topPfx = -1;
    int size = 50;
    char *arr = new char[size]{0};
    char *pfx = new char[size]{0};
    bool isFull()
    {
        return topArr == size - 1;
    }
    bool isEmpty()
    {
        return topArr == -1;
    }
    bool isOperand(char sym)
    {
        return (sym >= '0' && sym <= '9') || (sym >= 'A' && sym <= 'Z') || (sym >= 'a' && sym <= 'z');
    }
    bool isOperator(char sym)
    {
        return sym == '+' || sym == '-' || sym == '*' || sym == '/';
    }

    void push(char sym)
    {
        if (isOperand(sym))
        {
            pfx[++topPfx] = sym;
        }
        else if (sym == '(')
        {
            arr[++topArr] = sym;
        }
        else if (sym == ')')
        {
            char temp = pop();
            while (temp != '(')
            {
                pfx[++topPfx] = temp;
                if (isEmpty())
                {
                    break;
                }

                temp = pop();
            }
        }
        else if (isOperator(sym))
        {

            char temp = pop();
            while (temp != '(')
            {
                pfx[++topPfx] = temp;
                if (isEmpty())
                {
                    break;
                }

                temp = pop();
            }

            arr[++topArr] = sym;
        }
    }
    char pop()
    {
        if (!isEmpty())
        {
            return arr[topArr--];
        }
    }
    void traversal()
    {
        cout << pfx << endl;
    }
};
int main()
{
    char *expression = new char[50];
    cout << "Enter your expression: ";
    cin.getline(expression, 50);
    int i = 0;
    stack s;
    while (expression[i] != '\0')
    {
        s.push(expression[i]);
        i++;
    }
    s.traversal();

    return 0;
}