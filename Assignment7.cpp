#include <bits/stdc++.h>
using namespace std;

template <class T>
class Vec
{
private:
    T *a;
    int n;

public:
    void Read();
    void Modify(int, int);
    void Multiply(int);
    void Display();
};

template <class T>
void Vec<T>::Read()
{
    cout << "Enter Vector Size" << endl;
    cin >> n;

    cout << "Enter Vector Elements" << endl;
    a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> *(a + i);
}

template <class T>
void Vec<T>::Modify(int x, int y)
{
    int p = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(a + i) == x)
        {
            flag = 1;
            p = i;
            break;
        }
    }

    if (flag)
        *(a + p) = y;
    else
        cout << "Element Not Found" << endl;
}

template <class T>
void Vec<T>::Multiply(int m)
{
    for (int i = 0; i < n; i++)
        *(a + i) *= m;
}

template <class T>
void Vec<T>::Display()
{
    cout << "(";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << *(a + i) << ", ";
        else
            cout << *(a + i) << ")" << endl;
    }
}

int main()
{
    Vec<int> v;
    int a, b, m;

    v.Read();
    v.Display();
    cout << "Enter Old Element to Modify" << endl;
    cin >> a;
    cout << "Enter New Element to Modify" << endl;
    cin >> b;
    v.Modify(a, b);
    v.Display();
    cout << "Enter Number to Multiply" << endl;
    cin >> m;
    v.Multiply(m);
    v.Display();

    return 0;
}