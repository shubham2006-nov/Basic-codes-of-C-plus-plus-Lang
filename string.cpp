// using string in c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Shubham";
    cout << name << endl; // we have to print name or string firstly

    cout << " the length of the name is = " << name.length() << endl;
    cout << " the first three letters are = " << name.substr(0, 3) << endl;

    return 0;
}