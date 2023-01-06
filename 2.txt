#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int roll_number;
    string class_;
    string division;
    string dob;
    string blood_group;
    string address;
    string phone_number;
    static int count; // static variable to maintain count of students

public:
    // Constructor to initialize student details
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

    // Destructor to decrement count when a student is deleted
    ~Student() { count--; }

    // Inline function to get name of student
    string getName() const { return name; }

    // Inline function to get roll number of student
    int getRollNumber() const { return roll_number; }

    // Inline function to get class of student
    string getClass() const { return class_; }

    // Inline function to get division of student
    string getDivision() const { return division; }

    // Inline function to get date of birth of student
    string getDOB() const { return dob; }

    // Inline function to get blood group of student
    string getBloodGroup() const { return blood_group; }

    // Inline function to get address of student
    string getAddress() const { return address; }

    // Inline function to get phone number of student
    string getPhoneNumber() const { return phone_number; }

    // Static function to get count of students
    static int getCount() { return count; }
};

// Initialize static variable count
int Student::count = 0;

int main()
{
    // Create an array of students
    Student students[5] = {
        Student("John", 1, "10th", "A", "01/01/2000", "O+", "123 Main St", "123-456-7890"),
        Student("Anna", 2, "10th", "A", "02/01/2000", "A+", "456 Main St", "123-456-7891"),
        Student("Mike", 3, "10th", "B", "03/01/2000", "B+", "789 Main St", "123-456-7892"),
        Student("Jessica", 4, "11th", "A", "04/01/2000", "AB+", "321 Main St", "123-456-7893"),
        Student("James", 5, "11th", "B", "05/01/2000", "O-", "654 Main St", "123-456-7894")};

    // Get count of students
    cout << "Number of students: " << Student::getCount() << endl;
}