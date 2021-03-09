#include <iostream>
#include <string>
using namespace std;
int SIZE = 50;
int main()
{
    cout << "\t\tInfix To PostFix" << endl;
    cout << "Prepared By: Aneeq Khurram\t RegId: FA19-BCS-145" << endl;

    int top = -1;
    int LB = 0; //Left Bracket;
    int RB = 0; //Right Bracket;

    char *infix = new char[SIZE]{0};
    // char infix[] = "((2+3)*5)";
    char *postfix = new char[SIZE]{0};
    char *stack = new char[SIZE]{0};

    float result[SIZE] = {0};

    char choice;
    do
    {

        cout << "\nNote: Must enclose your expression within brackets (...expression)." << endl;

        cout << "Enter an expression: ";
        fflush(stdin);
        cin.getline(infix, SIZE);

        int tempSize = 0;
        for (int i = 0; infix[i] != 0; i++)
        {
            ++tempSize;
        }

        for (int i = 0, p = 0; infix[i] != '\0'; i++)
        {
            if (infix[i] >= 40 && infix[i] <= 47)
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
        if (RB == LB && infix[tempSize - 1] == 41 && infix[0] == 40)
        {
            cout << "Stack: " << endl;
            cout << "PostFix Expression: " << postfix << endl;
            int *temp = new int[SIZE];
            for (int i = 0, j = 0; postfix[i] != '\0'; i++)
            {
                if (postfix[i] == '+' || postfix[i] == '*' || postfix[i] == '-' || postfix[i] == '/')
                {
                    switch (postfix[i])
                    {
                    case 42:

                        temp[j - 2] = temp[j - 2] * temp[j - 1];
                        // cout << temp[j - 2] << "\n";
                        j -= 1;

                        break;
                    case 43:
                        temp[j - 2] = temp[j - 2] + temp[j - 1];
                        // cout << temp[j - 2] << "\n";
                        j -= 1;
                        break;
                    case 45:
                        temp[j - 2] = temp[j - 2] - temp[j - 1];
                        // cout << temp[j - 2] << "\n";
                        j -= 1;
                        break;
                    case 47:
                        temp[j - 2] = temp[j - 2] / temp[j - 1];
                        // cout << temp[j - 2] << "\n";
                        j -= 1;
                        break;
                        break;

                    default:
                        break;
                    }
                }
                else
                {
                    temp[j] = postfix[i] - 48;
                    // cout << temp[j] << j << "\n";
                    j++;
                }
            }
            cout << "Result: " << temp[0] << endl;
        }
        else
        {
            cout << "Invalid set of brackets." << endl;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}