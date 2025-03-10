// use of this operator
#include <iostream>
#include <string>
using namespace std;

// class definition
class teacher
{
private:
    double salary; // private member variable to store salary

public:
    string name;   // public member variable to store name
    string dept;   // public member variable to store department
    string subject; // public member variable to store subject

    // constructor to initialize the teacher object
    teacher(string n, string s, string d)
    {
        this->name = n;       // using 'this' pointer to differentiate between member and parameter
        this->subject = s;    // using 'this' pointer to differentiate between member and parameter
        this->dept = d;       // using 'this' pointer to differentiate between member and parameter
    }

    // setter function used to set private values
    void setsalary(double s)
    {
        salary = s; // setting the private member variable salary
    }

    // getter function used to get the value of private member variable salary
    double getsalary()
    {
        return salary; // returning the value of private member variable salary
    }

    // function to print the information of the teacher
    void getinfo()
    {
        cout << "Name is " << name << endl;         // printing the name
        cout << "Subject is " << subject << endl;   // printing the subject
        cout << "Department is " << dept << endl;   // printing the department
    }
};

int main()
{
    // creating an object of teacher class and initializing it using the constructor
    teacher t1("Shubham", "C++", "Computer science");
    t1.getinfo(); // calling the getinfo function to print the teacher's information

    return 0; // returning 0 to indicate successful execution
}
