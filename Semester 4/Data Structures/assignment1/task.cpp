#include <iostream>
#include <string>
using namespace std;
int SIZE = 50;
int main()
{
    cout << "\t\tInfix To PostFix" << endl;
    cout << "Prepared By: Aneeq Khurram\t RegId: FA19-BCS-145" << endl;

    int top = -1;
    float temp = 0;
    int LB = 0; //Left Bracket;
    int RB = 0; //Right Bracket;

    char *infix = new char[SIZE]{0};
    char *postfix = new char[SIZE]{0};
    char *stack = new char[SIZE]{0};

    float result[SIZE] = {0};

    cout << "\nNote: Must enclose your expression within brackets." << endl;

    cout << "Enter an expression: ";
    cin.getline(infix, SIZE);

    for (int i = 0, p = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] >= 40 && infix[i] <= 47)
        {
            top++;
            stack[top] = infix[i];

            if (stack[top] == 41)
            {

                RB++;
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
    if (RB == LB)
    {
        cout << "Stack: " << stack << endl;
        cout << "PostFix Expression: " << postfix << endl;
    }
    else
    {
        cout << "Invalid set of brackets." << endl;
    }
}