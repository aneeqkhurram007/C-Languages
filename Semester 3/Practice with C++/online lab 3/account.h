

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class account
{
private:
    float balance, amount;
    string name;

public:
    account(string name, float balance);
    account();
    ~account();
    void cashDepo();
    void chasWith();
    void accountInfo();
    void display();
};
#endif //ACCOUNT_H