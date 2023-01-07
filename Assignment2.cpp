#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int roll_number;
    string name, class_, division, dob, blood_group, address, phone_number;
    static int count; // static variable to maintain count of students

public:
    Student(string name, int roll_number, string class_, string division, string dob,
            string blood_group, string address, string phone_number)
        : name(name),
          roll_number(roll_number),
          class_(class_),
          division(division),
          dob(dob),
          blood_group(blood_group),
          address(address),
          phone_number(phone_number)
    {
        count++; // increment count when a new student is added
    }

    ~Student() { count--; }

    string getName() const { return name; }
    int getRollNumber() const { return roll_number; }
    string getClass() const { return class_; }
    string getDivision() const { return division; }
    string getDOB() const { return dob; }
    string getBloodGroup() const { return blood_group; }
    string getAddress() const { return address; }
    string getPhoneNumber() const { return phone_number; }
    static int getCount() { return count; }
};

int Student::count = 0;

int main()
{
    Student students[2] = {
        Student("John", 1, "10th", "A", "01/01/2000", "O+", "123 Main St", "123-456-7890"),
        Student("Anna", 2, "10th", "A", "02/01/2000", "A+", "456 Main St", "123-456-7891"),
    };
    cout << "Number of students: " << Student::getCount() << endl;

    return 0;
}