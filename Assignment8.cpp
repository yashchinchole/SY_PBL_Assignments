#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int id;
    char name[10];

    void Read()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }

    void Display()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
    }
};

void CreateFile()
{
    Employee e;
    ofstream f("yash.dat", ios::binary | ios::app);
    f.write((char *)&e, sizeof(e));
    f.close();
}

void ReadFile()
{
    Employee e;
    ifstream f("yash.dat", ios::binary | ios::in);
    while (f.read((char *)&e, sizeof(e)))
        e.Display();
    f.close();
}

void SearchFile()
{
    Employee e;
    int i, flag = 0;
    cout << "Enter ID to be Searched" << endl;
    cin >> i;

    ifstream f("yash.dat", ios::binary | ios::in);
    while (f.read((char *)&e, sizeof(e)))
    {
        if (e.id == i)
            flag = 1;
    }
    f.close();

    if (!flag)
        cout << "Not Found" << endl;
}

void UpdateFile()
{
    Employee e;
    fstream f("yash.dat", ios::binary | ios::in | ios::out);

    char n[10];
    cout << "Enter Name to Update" << endl;
    cin >> n;
    int i;
    cout << "Enter ID to Update" << endl;
    cin >> i;

    while (f.read((char *)&e, sizeof(e)))
    {
        if (e.id == i)
        {
            strcpy(e.name, n);
            f.seekp(f.tellg() - sizeof(e), ios::beg);
            f.write((char *)&e, sizeof(e));
            cout << "Successfully Updated" << endl;
            f.close();
        }
    }
}

void Deletefile()
{
    Employee e;
    fstream f("yash.dat", ios::binary | ios::in | ios::out);
    ofstream temp("temp.dat", ios::binary | ios::out);

    int i;
    cout << "Enter ID to Delete" << endl;
    cin >> i;

    while (f.read((char *)&e, sizeof(e)))
    {
        if (e.id != i)
            temp.write((char *)&e, sizeof(e));
    }
    f.close();
    temp.close();

    remove("yash.dat");
    rename("temp.dat", "yash.dat");
}

int main()
{
    Employee e[5];

    for (int i = 0; i < 3; i++)
        e[i].Read();

    ReadFile();
    for (int i = 0; i < 3; i++)
        CreateFile();

    ReadFile();
    SearchFile();
    ReadFile();
    Deletefile();
    ReadFile();

    return 0;
}