// if else statement to check the user is eligible for license or not
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "age = ";
    cin >> age;

    if (age > 18)
    {
        cout << " license given ";
    }
    else
    {
        cout << " license not given ";
    }

    return 0;
}