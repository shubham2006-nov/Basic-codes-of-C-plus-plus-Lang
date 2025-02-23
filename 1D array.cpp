// program to demonstrate 1d array in c++

#include <iostream>
using namespace std;
int main()
{

    int ar[10];
    for (int i = 0; i < 10; i++)
    {
        cout << " Enter the numbers =  ";
        cin >> ar[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "The numbers stored are " << ar[i] << endl;
    }

    return 0;
}
