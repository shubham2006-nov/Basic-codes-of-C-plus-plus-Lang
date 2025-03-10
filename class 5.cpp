// use of copy constructor
#include <iostream>
#include <string>
using namespace std;

// class definition
class teacher
{
private:
    double salary; // private member variable for salary

public:
    // parameterized constructor
    teacher(string n, string s, string d)
    {
        name = n;
        subject = s;
        dept = d;
    }

    // copy constructor
    teacher(teacher &orgobj) // pass by reference
    {
        cout << "I am a copy constructor" << endl;
        this->name = orgobj.name; // copy name
        this->subject = orgobj.subject; // copy subject
        this->dept = orgobj.dept; // copy department
    }

public:
    string name; // public member variable for name
    string dept; // public member variable for department
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

    // function to print teacher information
    void getinfo()
    {
        cout << "Name is : " << name << endl;
        cout << "Subject is : " << subject << endl;
        cout << "Department is : " << dept << endl;
    }
};

int main()
{
    teacher t1("Shubham ", "C++", "Computer science "); // create teacher object t1
    t1.getinfo(); // call function to print t1 information

    teacher t2("Simran", "C++", "Computer science"); // create teacher object t2
    t2.getinfo(); // call function to print t2 information

    teacher t3(t2); // copy constructor is called here to create t3 from t2
    t3.getinfo(); // call function to print t3 information

    return 0; // return 0 to indicate successful execution
}
