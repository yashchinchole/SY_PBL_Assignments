#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, vector<string>> M;
    map<string, vector<string>>::iterator it;
    vector<string> v;

    string name, dob, telephone;

    int c;
    do
    {
        cout << "\n1.Add  2.Search  3.Delete  4.Update  5.Display  6.Exit" << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Add Data" << endl;
            v.clear();
            cout << "Enter Name" << endl;
            cin >> name;
            cout << "Enter Birthdate" << endl;
            cin >> dob;
            cout << "Enter Telephone Number" << endl;
            cin >> telephone;
            v.push_back(dob);
            v.push_back(telephone);
            M[name] = v;
            break;

        case 2:
            cout << "Search Data" << endl;
            cout << "Enter Name to Find" << endl;
            cin >> name;
            if (M.count(name) > 0)
                cout << "Name Found" << endl;
            else
                cout << "Not Found" << endl;
            break;

        case 3:
            cout << "Delete Data" << endl;
            cout << "Enter Name to Delete" << endl;
            cin >> name;
            if (M.erase(name) > 0)
                cout << "Name Deleted" << endl;
            else
                cout << "Not Found" << endl;
            break;

        case 4:
            cout << "Update Data" << endl;
            cout << "Enter Name to Update" << endl;
            cin >> name;
            if (M.count(name) > 0)
            {
                cout << "Enter New Birthdate" << endl;
                cin >> dob;
                it->second[0] = dob;
                cout << "Enter New Telephone Number" << endl;
                cin >> telephone;
                it->second[1] = telephone;
            }
            else
                cout << "Not Found" << endl;
            break;

        case 5:
            cout << "Display Data" << endl;
            for (it = M.begin(); it != M.end(); it++)
                cout << it->first << " " << it->second[0] << " " << it->second[1] << endl;
            break;
        }
    } while (c != 6);

    return 0;
}