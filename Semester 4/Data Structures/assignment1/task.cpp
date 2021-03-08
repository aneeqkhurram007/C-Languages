#include <iostream>
#include <string>
using namespace std;
int SIZE = 50;
int main()
{
    cout << "\tInfix To PostFix" << endl;
    cout << "Prepared By: Aneeq Khurram\t RegId: FA19-BCS-145" << endl;
    int top = -1;
    char *infix = new char[SIZE]{0};
    char *postfix = new char[SIZE]{0};
    char *stack = new char[SIZE]{0};
    float result[SIZE] = {0};
    cout << "Note: Must enclose your expression within brackets." << endl;
    cout << "Enter an expression: ";
    cin.getline(infix, SIZE);
    float temp = 0;

    for (int i = 0, p = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] >= 40 && infix[i] <= 47)
        {
            top++;

            stack[top] = infix[i];

            if (stack[top] == 41)
            {

                // switch (stack[top - 1])
                // {
                // case 42:
                //     temp = postfix[p] * postfix[p - 1];
                //     postfix[p - 1] = temp;
                //     break;
                // case 43:
                //     temp = postfix[p] + postfix[p - 1];
                //     postfix[p - 1] = temp;

                //     break;
                // case 45:
                //     temp = postfix[p] - postfix[p - 1];
                //     postfix[p - 1] = temp;

                //     break;
                // case 47:
                //     temp = postfix[p] / postfix[p - 1];
                //     postfix[p - 1] = temp;

                //     break;

                // default:
                //     break;
                // }
                postfix[p] = stack[top - 1];

                p++;

                stack[top] = '\0';
                stack[top - 1] = '\0';
                stack[top - 2] = '\0';
                top -= 3;
            }
        }
        else
        {
            postfix[p] = infix[i];
            p++;
        }
    }
    cout << "Stack: " << stack << endl;
    cout << "PostFix Expression: " << postfix << endl;
}