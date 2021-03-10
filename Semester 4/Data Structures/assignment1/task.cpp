#include <iostream>
#include <string>
using namespace std;

int SIZE = 50;
int top = -1;

char *pop(char *stack, char element)
{
    top--;
    char *temp = new char[SIZE];
    for (int i = 0, j = 0; i < top; i++)
    {
        if (stack[i] != element)
        {
            temp[j] = stack[i];
            j++;
        }
    }
    delete[] stack;
    return temp;
}
char *push(char *stack, char element)
{
    top++;
    int i;
    char *temp = new char[SIZE];
    for (i = 0; i < top - 1; i++)
    {

        temp[i] = stack[i];
    }
    temp[top - 1] = element;
    delete[] stack;
    return temp;
}
bool isEmpty()
{
    return top == -1;
}
bool isFull()
{
    return top == SIZE;
}
bool isOperator(char Operator)
{
    return Operator >= 40 && Operator <= 47;
}
void stringInitializer(char *infix)
{
    cout << "\nNote: Must enclose your expression within brackets (...expression)." << endl;
    cout << "Enter an expression: ";
    fflush(stdin);
    cin.getline(infix, SIZE);
}
int stringSize(char *infix)
{
    int tempSize = 0;
    for (int i = 0; infix[i] != 0; i++)
    {
        ++tempSize;
    }
    return tempSize;
}
void processing(char *infix, char *postfix, char *stack, int *LB, int *RB)
{
    for (int i = 0, p = 0; infix[i] != '\0'; i++)
    {
        if (isOperator(infix[i]))
        {
            top++;
            stack[top] = infix[i];

            if (stack[top] == 41)
            {

                RB++;
                postfix[p] = stack[top - 1];
                p++;

                stack[top] = '\0';
                stack[top - 1] = '\0';
                stack[top - 2] = '\0';

                top -= 3;
            }
            else if (stack[top] == 40)
            {
                LB++;
            }
        }
        else
        {
            postfix[p] = infix[i];
            p++;
        }
    }
}
void resultsProcessing(char *postfix)
{
    float *temp = new float[SIZE];
    bool flag = false;
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (!(postfix[i] >= 40 && postfix[i] <= 57))
        {

            flag = true;
            break;
        }
    }
    if (!flag)
    {
        for (int i = 0, j = 0; postfix[i] != '\0'; i++)
        {
            if (isOperator(postfix[i]))
            {
                switch (postfix[i])
                {
                case 42:

                    temp[j - 2] = temp[j - 2] * temp[j - 1];
                    j -= 1;

                    break;
                case 43:
                    temp[j - 2] = temp[j - 2] + temp[j - 1];
                    j -= 1;
                    break;
                case 45:
                    temp[j - 2] = temp[j - 2] - temp[j - 1];
                    j -= 1;
                    break;
                case 47:
                    temp[j - 2] = temp[j - 2] / temp[j - 1];
                    j -= 1;
                    break;

                default:
                    break;
                }
            }
            else
            {
                temp[j] = postfix[i] - 48;
                j++;
            }
        }
        cout << "Result: " << temp[0] << endl;
    }
    else
    {
        cout << "No Result for Undefined variables." << endl;
    }
}
int main()
{
    cout << "\t\tInfix To PostFix" << endl;
    cout << "Prepared By: Aneeq Khurram\t RegId: FA19-BCS-145" << endl;

    char choice;
    do
    {

        int LB = 0;
        int RB = 0;

        char *infix = new char[SIZE]{0};
        char *postfix = new char[SIZE]{0};
        char *stack = new char[SIZE]{0};

        float result[SIZE] = {0};

        stringInitializer(infix);

        int tempSize = stringSize(infix);

        processing(infix, postfix, stack, &LB, &RB);

        if (RB == LB && infix[tempSize - 1] == 41 && infix[0] == 40)
        {
            cout << "PostFix Expression: " << postfix << endl;
            resultsProcessing(postfix);
        }
        else
        {
            cout << "Invalid set of brackets." << endl;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}