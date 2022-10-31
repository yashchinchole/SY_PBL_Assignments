#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    int milege, price;
};

class Car : public Vehicle
{
public:
    int ownership_cost, warranty, seating_capacity;
    string fuel_type;
};
class Bike : public Vehicle
{
public:
    int no_cylinders, no_gears;
    string cooling_type, wheel_type;
    int fuel_tank_size;
};

class Audi : public Car
{
public:
    string model_type;
    void read_Audi();
    void display_Audi();
};
class Ford : public Car
{
public:
    string model_type;
    void read_Ford();
    void display_Ford();
};

class bajaj : public Bike
{
public:
    string make_type;
};
class tvs : public Bike
{
public:
    string make_type;
};

void Audi ::read_Audi()
{
    cout << "welcome to Audi" << endl;
    cout << "enter model type: ";
    cin >> model_type;
    cout << "enter owernship cost";
    cin >> ownership_cost;
    cout << "enter warrenty in year";
    cin >> warranty;
    cout << "enter seating capacity";
    cin >> seating_capacity;
    cout << "enter fuel type (diesel or petrol)";
    cin >> fuel_type;
    cout << "enter milege";
    cin >> milege;
    cout << "enter price of the Vehicle";
    cin >> price;
}

void Ford ::read_Ford()
{
    cout << endl;
    cout << "welcome to Ford " << endl;
    cout << "enter model type: ";
    cin >> model_type;
    cout << "enter owernship cost";
    cin >> ownership_cost;
    cout << "enter warrenty in year";
    cin >> warranty;
    cout << "enter seating capacity";
    cin >> seating_capacity;
    cout << "enter fuel type (diesel or petrol)";
    cin >> fuel_type;
    cout << "enter milege";
    cin >> milege;
    cout << "enter price of the Vehicle";
    cin >> price;
}

void Audi ::display_Audi()
{
    cout << endl;
    cout << "model type is " << model_type << endl;
    cout << "owernship cost is " << ownership_cost << endl;
    cout << "warrenty in year is " << warranty << endl;
    cout << "seating capacity is " << seating_capacity << endl;
    cout << "fuel type (diesel or petrol) is " << fuel_type;
    cout << "milege is " << milege << endl;
    cout << "price of the Vehicle is " << price << endl;
}

void Ford ::display_Ford()
{
    cout << endl;
    cout << "model type is " << model_type << endl;
    cout << "owernship cost is " << ownership_cost << endl;
    cout << "warrenty in year is " << warranty << endl;
    cout << "seating capacity is " << seating_capacity << endl;
    cout << "fuel type (diesel or petrol) is " << fuel_type;
    cout << "milege is " << milege << endl;
    cout << "price of the Vehicle is " << price << endl;
}

int main()
{
    Audi o1;
    Ford o2;
    o1.read_Audi();
    o1.display_Audi();
    o2.read_Ford();
    o2.display_Ford();

    return 0;
}