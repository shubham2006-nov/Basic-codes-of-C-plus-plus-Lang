
#include <iostream>
#include <string>
using namespace std;

// class
class teacher
{
private:
    double salary;

public:
    // teacher() // non parameterized
    // {         // this is a constructor and it will be called  automatically
    //           // and it will always be declared as public
    //     dept = "computer science ";
    // }

    // parameterized
    teacher(string n, string s, string d)
    {

        name = n;
        subject = s;
        dept = d;
    }

public:
    string name;
    string dept;
    string subject;

    // settler function used to set private values
    void setsalary(double s)
    {
        salary = s;
    }
    // getter function used to GET THE VALUES OF private function
    double getsalary()
    {
        return salary;
    }
    void getinfo()
    {
        cout << "Name is " << name << endl;
        cout << "Subject is " << subject << endl;
        cout << "Department is " << dept << endl;
    }
};

int main()
{
    teacher t1("Shubham ", "C++", "Computer science ");
    t1.getinfo(); // method to call function

    return 0;
}
