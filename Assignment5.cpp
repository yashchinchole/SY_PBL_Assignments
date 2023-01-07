#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    double length, breadth;

    void get_data()
    {
        cout << "Enter Dimensions" << endl;
        cin >> length >> breadth;
    }
    virtual void area() = 0;
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Triangle : " << 0.5 * length * breadth << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Rectangle : " << length * breadth << endl;
    }
};

int main()
{
    Shape *s;

    Triangle t;
    t.get_data();
    s = &t;
    s->area();

    Rectangle r;
    r.get_data();
    s = &r;
    s->area();

    return 0;
}