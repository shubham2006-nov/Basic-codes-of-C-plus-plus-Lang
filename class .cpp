// Include necessary libraries
#include <iostream>
#include <string>
using namespace std;

// Define a class named 'teacher'
class teacher
{
public:
    // Declare public member variables
    string name;
    string dept;
    string subject;
    double salary;
};

int main()
{
    // Create an object of the class 'teacher'
    teacher t1;

    // Assign values to the object's member variables
    t1.name = "Shubham";
    t1.dept = "A";
    t1.subject = "C++ And C";
    t1.salary = 1000;

    // Output the values of the object's member variables
    cout << "Name of the teacher is " << t1.name << endl;
    cout << "Dept of the teacher is " << t1.dept << endl;
    cout << "Name of the subject is " << t1.subject << endl;
    cout << "Salary of the teacher is " << t1.salary << endl;

    // Return 0 to indicate successful execution
    return 0;
}
