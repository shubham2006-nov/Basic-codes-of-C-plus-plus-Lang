// indirectly access through public functions and constructors
#include <iostream>
#include <string>
using namespace std;

// class definition
class teacher
{
private:
    double salary; // private member variable for salary

public:
    // non-parameterized constructor
    teacher() 
    {         
        // this is a constructor and it will be called automatically
        // and it will always be declared as public
        dept = "computer science ";
    }

    // parameterized constructor
    teacher(string n, string s, string d) {
        name = n;
        subject = s;
        dept = d;
    }

public:
    string name;   // public member variable for name
    string dept;   // public member variable for department
    string subject; // public member variable for subject

    // setter function used to set private values
    void setsalary(double s)
    {
        salary = s;
    }
    // getter function used to get the values of private member variable
    double getsalary()
    {
        return salary;
    }
};

int main()
{
    // here t1 is the object
    teacher t1; // constructor call
    t1.name = "Shubham"; // setting name
    t1.subject = "C++ And C"; // setting subject
    t1.setsalary(2000); // setting salary using setter function
    // printing details of the teacher
    cout << "Name of the teacher is " << t1.name << endl;
    cout << "Dept of the teacher is " << t1.dept << endl;
    cout << "Name of the subject is " << t1.subject << endl;
    cout << "Salary of the teacher is " << t1.getsalary() << endl;

    return 0;
}
