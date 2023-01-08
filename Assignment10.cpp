#include <iostream>
using namespace std;
int findIntersection(string a[], string b[], int ai, int bi)
{
    int inter = 0;
    for (int i = 0; i < (ai > bi ? ai : bi); i++)
    {
        for (int j = 0; j < (ai > bi ? bi : ai); j++)
        {
            if (a[i] == b[j])
            {
                inter++;
            }
        }
    }
    return inter;
}
int findUnion(string a[], string b[], int ai, int bi)
{
    int aub;
    aub = ai + bi - findIntersection(a, b, ai, bi);
    return aub;
}
void aunionb(string a[], string b[], int ai, int bi)
{
    int aub;
    aub = ai + bi - findIntersection(a, b, ai, bi);

    cout << "\nPizza or burger or both " << aub;
}
void aminusb(string a[], string b[], int ai, int bi)
{
    int amb;
    amb = ai - findIntersection(a, b, ai, bi);

    cout << "\nOnly pizza" << amb;
}
void bminusa(string a[], string b[], int ai, int bi)
{
    int bma;
    bma = bi - findIntersection(a, b, ai, bi);

    cout << "\nOnly burger " << bma;
}
void abbar(string a[], string b[], int ai, int bi, int ui)
{
    int abb;
    abb = ui - findUnion(a, b, ai, bi);

    cout << "\nNeither pizza nor burger " << abb;
}
void ainterb(string a[], string b[], int ai, int bi)
{
    int aib;
    aib = findIntersection(a, b, ai, bi);

    cout << "\nPizza and Burger " << aib;
}
int main()
{
    string u[100];
    int ui = 0;
    string p[100];
    int pi = 0;
    string b[100];
    int bi = 0;
    int choice;
    do
    {
        cout << "\n1.Enter all names to be used in this program ";
        cout << "\n2.Enter name of person who like pizza";
        cout << "\n3.Enter name of person who like burger";
        cout << "\n4.perform set operation";
        cout << "\n5.Exit";
        cout << "\nChoice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> u[ui];
            ui++;
            break;
        case 2:
            cin >> p[pi];
            pi++;
            break;
        case 3:
            cin >> b[bi];
            bi++;
            break;
        case 4:
            aunionb(p, b, pi, bi);
            aminusb(p, b, pi, bi);
            bminusa(p, b, pi, bi);
            ainterb(p, b, pi, bi);
            abbar(p, b, pi, bi, ui);
            break;
        case 5:
            choice = 0;
            break;

        default:
            break;
        }
    } while (choice);

    return 0;
}