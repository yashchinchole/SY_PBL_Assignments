#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Names : ";
    cin >> n;
    string names[n];
    cout << "Enter Names" << endl;
    for (int i = 0; i < n; i++)
        cin >> names[i];

    sort(names, names + n);
    cout << "Sorted Names" << endl;
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}