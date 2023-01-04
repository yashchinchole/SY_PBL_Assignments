// ASSIGNMENT NO - 1
// NAME - YASH JITENDRA CHINCHOLE
// ROLL NO - SYCOA37

#include <bits/stdc++.h>
using namespace std;

class bankdata
{
    int accno;
    string name, type;
    float balance;

public:
    bankdata(int a, string b, string c, float d)
    {
        accno = a;
        name = b;
        type = c;
        balance = d;
    }

    void deposit(float a)
    {
        balance += a;
    }

    void withdraw(float b)
    {
        if (balance >= b)
        {
            balance = balance - b;
            display(0, b);
        }

        else
        {
            cout << "Insufficieant Balance" << endl;
            display(0, 0);
        }
    }

    void display(float depo, float withdr)
    {
        cout << "Name : " << name << endl;
        cout << "Account Number : " << accno << endl;
        cout << "Amount Withdraw : " << withdr << endl;
        cout << "Aamount Deposit : " << depo << endl;
        cout << "Updated Balance : " << balance << endl;
    }
};

int main()
{
    string s, type;
    int accno, choice;
    float bal, depo, withdr;

    cout << "Enter name : ";
    cin >> s;
    cout << "Enter Account Number. : ";
    cin >> accno;
    cout << "Enter type : ";
    cin >> type;
    cout << "Enter balance : ";
    cin >> bal;
    bankdata b1(accno, s, type, bal);

    while (choice != 3)
    {
        cout << "Enter Choice:" << endl;
        cout << "1.Deposit\t2.Withdraw\t3.Exit" << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Amount to deposit : ";
            cin >> depo;
            b1.deposit(depo);
            b1.display(depo, 0);
        }

        else if (choice == 2)
        {
            cout << "Amount to withdraw : ";
            cin >> withdr;
            b1.withdraw(withdr);
        }
    }
}