#include <iostream> // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() {
    int n; // Variable to store the user input
    int factorial = 1; // Variable to store the factorial result, initialized to 1

    cout << "Enter a positive integer: "; // Prompt the user to enter a positive integer
    cin >> n; // Read the user input and store it in variable n

    int i = 1; // Initialize a counter variable i to 1
    while (i <= n) { // Loop from 1 to n
        factorial = factorial * i; // Multiply the current factorial value by i
        i = i + 1; // Increment the counter variable i by 1
    }

    cout << "Factorial of " << n << " = " << factorial << endl; // Output the factorial result

    return 0; // Return 0 to indicate successful execution
}
