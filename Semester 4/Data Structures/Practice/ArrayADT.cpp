#include <iostream>
using namespace std;
class ArrayADT
{
private:
public:
    ArrayADT(int totalSize, int usedSize)
    {
        this->totalSize = totalSize;
        this->usedSize = usedSize;
        this->ptr = new int(totalSize);
    }
    ~ArrayADT()
    {
    }
    int totalSize;
    int usedSize;
    int *ptr;
    void show()
    {
        for (int i = 0; i < this->usedSize; i++)
        {
            cout << "\n"
                 << (this->ptr)[i];
        }
    }
    void setVal()
    {
        for (int i = 0; i < this->usedSize; i++)
        {
            cout << "Enter element " << i << " : ";
            cin >> (this->ptr)[i];
        }
    }
};

int main()
{
    ArrayADT marks = ArrayADT(100, 2);
    marks.setVal();
    marks.show();

    return 0;
}