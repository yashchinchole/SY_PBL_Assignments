#include <bits/stdc++.h>
using namespace std;

class Bank
{
private:
    int accno;
    string name;
    float balance;

public:
    Bank();
    void Withdraw();
    void Deposit();
    void Display();
};

Bank::Bank()
{
    cout << "Enter" << endl;
    cout << "Name : ";
    cin >> name;
    cout << "Account Number : ";
    cin >> accno;
    cout << "Balance : ";
    cin >> balance;
}

void Bank::Deposit()
{
    float n;
    cout << "Enter Amount to Deposit" << endl;
    cin >> n;
    balance += n;
}

void Bank::Withdraw()
{
    float n;
    cout << "Enter Amount to Withdraw" << endl;
    cin >> n;
    if (n > balance)
        cout << "Insufficient Balance" << endl;
    else
        balance -= n;
}

void Bank::Display()
{
    cout << "Name : " << name << endl;
    cout << "Account Number : " << accno << endl;
    cout << "Balance : " << balance << endl;
}

int main()
{
    Bank a;
    a.Deposit();
    a.Display();
    a.Withdraw();
    a.Display();

    return 0;
}