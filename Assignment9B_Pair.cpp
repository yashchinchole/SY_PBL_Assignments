#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, pair<string, long long>> R;

    R["yash1"] = make_pair("14/07/2003", 8888888888);
    R["yash2"] = make_pair("24/07/2003", 9999999999);

    cout << "All Records" << endl;
    for (auto const &r : R)
        cout << r.first << " " << r.second.first << " " << r.second.second << endl;

    cout << "Enter Name to Search : ";
    string name;
    cin >> name;
    if (R.count(name) > 0)
        cout << name << " Found" << endl;
    else
        cout << name << " Not Found" << endl;

    cout << "Enter Name to Delete : ";
    cin >> name;
    if (R.erase(name) > 0)
        cout << name << " Deleted" << endl;
    else
        cout << name << " Not Found" << endl;

    cout << "Enter Name to Update: ";
    cin >> name;
    if (R.count(name) > 0)
    {
        cout << "Enter New Birth Date & Telephone Number : ";
        string birthDate;
        long long telephone;
        cin >> birthDate >> telephone;
        R[name] = make_pair(birthDate, telephone);
    }
    else
        cout << name << " Not Found" << endl;

    return 0;
}