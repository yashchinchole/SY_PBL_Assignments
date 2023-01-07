#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
    int mileage;
    int price;

public:
    Vehicle()
    {
        cout << "Mileage : ";
        cin >> mileage;
        cout << "Price : ";
        cin >> price;
    }
    int getMileage() { return mileage; }
    int getPrice() { return price; }
};

class Car : public Vehicle
{
    int store_ownwership_cost, Warranty, seating_capacity;
    string fuel_type;

public:
    Car()
    {
        cout << "Ownership Cost(in lakhs) : ";
        cin >> store_ownwership_cost;
        cout << "Warranty (in years): ";
        cin >> Warranty;
        cout << "Seating Capacity : ";
        cin >> seating_capacity;
        cout << "Fuel Type : ";
        cin >> fuel_type;
    }
    int get_cost() { return store_ownwership_cost; }
    int getWarranty() { return Warranty; }
    int getSeat_cap() { return seating_capacity; }
    string getFuel_type() { return fuel_type; }
};

class Bike : public Vehicle
{
    int no_of_cylinders, no_of_gears;
    string cooling_type, wheel_type;
    float fuel_tank_Size;

public:
    Bike()
    {
        cout << "Number Of cylinder : ";
        cin >> no_of_cylinders;
        cout << "Number Of gears : ";
        cin >> no_of_gears;
        cout << "Cooling type : ";
        cin >> cooling_type;
        cout << "Wheel type : ";
        cin >> wheel_type;
        cout << "Size of Fuel tank (in inches) : ";
        cin >> fuel_tank_Size;
    }
    int get_no_of_cyl() { return no_of_cylinders; }
    int get_no_of_gears() { return no_of_gears; }
    string get_cooltype() { return cooling_type; }
    string get_wheeltype() { return wheel_type; }
    float get_tanksize() { return fuel_tank_Size; }
};

class Audi : public Car
{
    string Model_type;

public:
    Audi()
    {
        cout << "Model Type : ";
        cin >> Model_type;
    }
    void print_info()
    {
        cout << "Information of Audi ";
        cout << "Model Type : " << Model_type << endl;
        cout << "Milage (in mpl): " << getMileage() << endl;
        cout << "Price (in lakhs): " << getPrice() << endl;
        cout << "Ownership cost of Car (in lakhs):" << get_cost() << endl;
        cout << "Warranty (in years): " << getWarranty() << endl;
        cout << "Seating Capacity : " << getSeat_cap() << endl;
        cout << "Fuel Type : " << getFuel_type() << endl;
    }
};

class Ford : public Car
{
    string Model_type;

public:
    Ford()
    {
        cout << "Model Type : ";
        cin >> Model_type;
    }
    void print_info()
    {
        cout << "Information of Ford ";
        cout << "Model Type : " << Model_type << endl;
        cout << "Milage (in mpl): " << getMileage() << endl;
        cout << "Price (in lakhs): " << getPrice() << endl;
        cout << "Ownership cost of Car (in lakhs):" << get_cost() << endl;
        cout << "Warranty (in years): " << getWarranty() << endl;
        cout << "Seating Capacity : " << getSeat_cap() << endl;
        cout << "Fuel Type : " << getFuel_type() << endl;
    }
};

class Bajaj : public Bike
{
    string type;

public:
    Bajaj()
    {
        cout << "Model Type : ";
        cin >> type;
    }
    void print_info_bike()
    {
        cout << "Information of Bajaj Bike ";
        cout << "Model Type : " << type << endl;
        cout << "Milage (in mpl): " << getMileage() << endl;
        cout << "Price (in lakhs): " << getPrice() << endl;
        cout << "Number of Cylinder:" << get_no_of_cyl() << endl;
        cout << "Number of Gears : " << get_no_of_gears() << endl;
        cout << "Cooling Type : " << get_cooltype() << endl;
        cout << "Wheel Type : " << get_wheeltype() << endl;
        cout << "Size of Tank (in inches) : " << get_tanksize() << endl;
    }
};

class TVS : public Bike
{
    string type;

public:
    TVS()
    {
        cout << "Model Type : ";
        cin >> type;
    }
    void print_info_bike()
    {
        cout << "Information of Bajaj Bike ";
        cout << "Model Type : " << type << endl;
        cout << "Milage (in mpl): " << getMileage() << endl;
        cout << "Price (in lakhs): " << getPrice() << endl;
        cout << "Number of Cylinder:" << get_no_of_cyl() << endl;
        cout << "Number of Gears : " << get_no_of_gears() << endl;
        cout << "Cooling Type : " << get_cooltype() << endl;
        cout << "Wheel Type : " << get_wheeltype() << endl;
        cout << "Size of Tank (in inches) : " << get_tanksize() << endl;
    }
};

int main()
{
    Audi a;
    cout << "Enter info of Audi Car" << endl;
    a.print_info();

    Ford f;
    cout << "Enter info of Ford Car" << endl;
    f.print_info();

    return 0;
}