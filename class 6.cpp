// use of copy constructor
#include <iostream>
#include <string>
using namespace std;

// class
class student
{
public:
    string name; // Student's name
    string dept; // Student's department
    double* cgpaPtr; // Pointer to student's CGPA

    // Constructor to initialize the student object
    student(string name, string dept, double cgpa)
    {
        this->name = name;
        this->dept = dept;
        cgpaPtr = new double; // Allocate memory for CGPA
        *cgpaPtr = cgpa; // Assign the CGPA value
    }

    // Copy constructor to create a copy of a student object
    student(student &obj)
    {
        cgpaPtr = new double; // Allocate memory for CGPA
        *cgpaPtr = *(obj.cgpaPtr); // Copy the CGPA value
        this->name = obj.name; // Copy the name
        this->dept = obj.dept; // Copy the department
    }

    // Function to display student information
    void getinfo() 
    {
        cout << "name: " << name << endl;
        cout << "Dept is: " << dept << endl;
        cout << "CGPA is: " << *cgpaPtr << endl;
    }

    // Destructor to free allocated memory
    ~student()
    {
        delete cgpaPtr;
    }
};;

int main()
{
    student s1("rahul kumar", "CS", 9.7);
    s1.getinfo();
    student s2(s1);
    *(s2.cgpaPtr) = 9;
    s2.getinfo() ;
}
