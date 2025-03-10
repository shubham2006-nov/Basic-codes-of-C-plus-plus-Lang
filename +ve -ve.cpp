//  Program to enter +ve no if -ve then break
#include <iostream>
using namespace std;
int main()
{
    int a = 0; // Initialize variable to store user input
    for (;;)
    {
        // Infinite loop to continuously ask for user input
        cout << "Enter number = ";
        cin >> a; // Read user input

        // Check if the entered number is negative
        if (a < 0)
        {
            cout << "number is negative "; // Inform the user that the number is negative
            break; // Exit the loop if the number is negative
        }
    }
}
