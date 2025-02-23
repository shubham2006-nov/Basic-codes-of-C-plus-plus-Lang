// program to check whether the number is positive or negative or zero

#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter number  = ";
    cin >> age;
    if (age > 1)
    {
        if (age % 2 == 0)
        {
            {
                cout << " Positive and even    ";
            }
        }
    }

    else
    {

        if (age > -1 && age % 2 != 0)
        {

            cout << " Negative and odd  ";
        }
        else
        {
            cout << "  Zero ";
        }
    }
}
