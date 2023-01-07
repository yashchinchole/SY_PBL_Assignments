#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real, img;

public:
    Complex();
    friend Complex operator+(Complex a, Complex b);
    friend Complex operator*(Complex a, Complex b);
    Complex operator>>(Complex a);
    void operator<<(Complex a);
};

Complex::Complex()
{
    real = img = 0;
}

Complex operator+(Complex a, Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;

    return c;
}

Complex operator*(Complex a, Complex b)
{
    Complex c;
    c.real = a.real * b.real - a.img * b.img;
    c.img = a.real * b.img + b.real * a.img;

    return c;
}

Complex Complex ::operator>>(Complex a)
{
    cout << "Real : ";
    cin >> a.real;
    cout << "Img : ";
    cin >> a.img;

    return a;
}

void Complex::operator<<(Complex a)
{
    if (img >= 0)
        cout << "Complex Number : " << a.real << " + " << a.img << "i" << endl;
    else
        cout << "Complex Number : " << a.real << a.img << "i" << endl;
}

int main()
{
    Complex a, b, c;
    cout << "Enter 1 Number" << endl;
    a = a >> (a);
    cout << "Enter 2 Number" << endl;
    b = b >> (b);
    cout << "Addition" << endl;
    c = a + b;
    c << (c);
    cout << "Multiplication" << endl;
    c = a * b;
    c << (c);

    return 0;
}