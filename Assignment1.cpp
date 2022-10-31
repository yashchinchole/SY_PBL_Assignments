#include <bits/stdc++.h>
using namespace std;

class Bank
{
public:
    int bal, accn;
    string name;

    void read();
    void display();
    void getacc();
    void deposite();
    void withdraw();
};

inline void Bank::read()
{
    cout << "Enter Name" << endl;
    cin >> name;
    cout << "Enter Account Number" << endl;
    cin >> accn;
    cout << "Enter Balance" << endl;
    cin >> bal;
}

inline void Bank::display()
{
    cout << "Name : " << name << endl;
    cout << "Account Number : " << accn << endl;
    cout << "Balance : " << bal << endl;
}

inline void Bank::getacc()
{
    cout << "Account Number : " << accn << endl;
}

inline void Bank::deposite()
{
    int deposite;
    cout << "Enter Deposite Amount" << endl;
    cin >> deposite;
    bal += deposite;
    cout << "Updated Balance : " << bal << endl;
}

inline void Bank::withdraw()
{
    int withdraw;
    cout << "Enter Withdraw Amount" << endl;
    cin >> withdraw;
    bal -= withdraw;
    cout << "Updated Balance : " << bal << endl;
}

int main()
{
    Bank o[10];
    int n, i, id, opt;
    cout << "Enter Number of Employees" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter Information of Employee Number : " << i + 1 << endl;
        o[i].read();
    }

    for (i = 0; i < n; i++)
    {
        cout << "Information of Employee Number : " << i + 1 << endl;
        o[i].display();
    }

    cout << "Enter Employee Number To Manage Account" << endl;
    cin >> id;
    cout << "Enter" << endl;
    cout << "\t1. Get Account Number" << endl;
    cout << "\t2. Deposite Amount" << endl;
    cout << "\t3. Withdraw Amount" << endl;
    cin >> opt;

    do
    {
        switch (opt)
        {
        case 1:
            o[id - 1].getacc();
            break;
        case 2:
            o[id - 1].deposite();
            break;
        case 3:
            o[id - 1].withdraw();
            break;
        }
    } while (1);

    return 0;
}