/*
Insertion
1. Deletion By Value
2. Deletion By Index
3. Search By Value
4. Search By Index
5. Traversing
*/
#include <iostream>
using namespace std;
int SIZE = 50;
void display(int *option)
{
    cout << "Press 1 for Deletion By Index: " << endl;
    cout << "Press 2 for Deletion By Value: " << endl;
    cout << "Press 3 for Search By Index: " << endl;
    cout << "Press 4 for Search By Value: " << endl;
    cout << "Press 5 for Traversing: " << endl;
    cout << "\nEnter your option: ";
    cin >> *option;
}

void insert(char *array)
{
    cout << "Enter any string: ";
    cin.getline(array, 50);
}

char *delByIndex(char *array)
{
    cout << "\tDelete By Index" << endl;
    int index;
    cout << "Enter index: ";
    cin >> index;
    char *temp = new char[SIZE]{0};
    for (int i = 0, j = 0; array[i] != '\0'; i++)
    {
        if (index != i)
        {
            temp[j] = array[i];
            j++;
        }
    }
    delete[] array;
    array = NULL;
    return temp;
}

char *delByValue(char *array)
{
    cout << "\tDelete By Value" << endl;
    char value;
    cout << "Enter Value: ";
    cin >> value;
    char *temp = new char[SIZE]{0};
    for (int i = 0, j = 0; array[i] != '\0'; i++)
    {
        if (array[i] != value)
        {
            temp[j] = array[i];
            j++;
        }
    }
    delete[] array;
    array = NULL;
    return temp;
}

void searchByIndex(char *array)
{
    cout << "\tSearch By Index" << endl;
    int index;
    cout << "Enter index: ";
    cin >> index;
    for (int i = 0; i < SIZE; i++)
    {
        if (i == index)
        {
            cout << array[i] << " is at index: " << index << endl;
        }
    }
}

void searchByValue(char *array)
{
    cout << "\tSearch By Value" << endl;
    char value;
    bool flag = false;
    cout << "Enter value: ";
    cin >> value;
    for (int i = 0; i < SIZE; i++)
    {
        if (value == array[i])
        {
            cout << array[i] << " is present at index: " << i << endl;
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "Value is not present in String" << endl;
    }
}

void traverse(char *array)
{
    cout << "Traverse" << endl;
    for (int i = 0; array[i] != '\0'; i++)
    {
        cout << array[i];
    }
    cout << endl;
}

int main()
{

    char choice;
    int option;
    char *array = new char[SIZE]{0};
    insert(array);
    do
    {
        cout << "\tArray Menu" << endl;
        display(&option);
        switch (option)
        {
        case 1:
            array = delByIndex(array);
            break;
        case 2:
            array = delByValue(array);
            break;
        case 3:
            searchByIndex(array);
            break;
        case 4:
            searchByValue(array);
            break;
        case 5:
            traverse(array);
            break;

        default:
            cout << "You entered wrong option :(" << endl;
            break;
        }
        cout << "Do you want to continue (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}