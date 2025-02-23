// user input program

#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Enter 1st number = ";
    cin >> a; // cin is used as scanf in c++

    cout << "Enter 2nd number = ";
    cin >> b;

    cout << "Sum is = " << a + b << endl;

    cout << "Minus is = " << a - b << endl;

    cout << "Divide is = " << a / b << endl;

    cout << "Multiplication is = " << a * b << endl;

    return 0;
}