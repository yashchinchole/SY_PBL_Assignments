// ASSIGNMENT NO - 7
// NAME - YASH JITENDRA CHINCHOLE
// ROLL NO - SYCOA37

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Vector
{
private:
    T *a;
    int n;

public:
    void Read();
    void Modify(int Old, int New);
    void Multiply(int n);
    void Display();
};

template <class T>
void Vector<T>::Read()
{
    cout << "Enter the size of the Vector: ";
    cin >> n;
    a = new int[n];
    cout << "Enter " << n << " data elements: ";
    for (int i = 0; i < n; i++)
        cin >> *(a + i);
}

template <class T>
void Vector<T>::Modify(int Old, int New)
{
    int pos = 0, found = 0;
    for (int i = 0; i < n; i++)
    {
        if (Old == *(a + i))
        {
            found = 1;
            pos = i;
            break;
        }
    }
    if (!found)
        cout << "Element is not present in the Vector!\n";
    else
        *(a + pos) = New;
}

template <class T>
void Vector<T>::Multiply(int n)
{
    for (int i = 0; i < this->n; i++)
        *(a + i) *= n;
}

template <class T>
void Vector<T>::Display()
{
    cout << "\nVector Elements:\n";
    cout << "(";
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << *(a + i) << ", ";
        else
            cout << *(a + i) << ")\n";
    }
}

int main()
{
    Vector<int> v1;
    int a, b;
    v1.Read();
    v1.Display();
    cout << "Enter two numbers for Modifying a data element\n(Old_Value  -  New_Value)\n"
         << endl;
    cin >> a >> b;
    v1.Modify(a, b);
    v1.Display();
    cout << "Enter a scaler to multiply a Vector by\n";
    cin >> a;
    v1.Multiply(a);
    v1.Display();

    return 0;
}