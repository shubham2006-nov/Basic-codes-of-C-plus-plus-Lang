// Program to print table of any number

#include <iostream>

using namespace std;
int main()
{
    int a;

    cout << "Enter number = ";
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {
        int mul = a * i;

        cout << a << "X" << i << "=" << mul << endl;
    }
    return 0;
}