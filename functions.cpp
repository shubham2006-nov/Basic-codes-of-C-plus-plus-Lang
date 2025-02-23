// program to write functions in c++
#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c = a + b;

    return c;
}
int main()
{
    int a, b;

    cout << "Enter a = " << endl;
    cin >> a;

    cout << "Enter b = " << endl;
    cin >> b;
    cout << " the function return = " << add(a, b);
    return 0;
}