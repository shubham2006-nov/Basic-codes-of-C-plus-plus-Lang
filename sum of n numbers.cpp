// Program for the sum of n natural numbers S
#include <iostream> // Include the iostream library for input and output

using namespace std; // Use the standard namespace

int main() {
    int n, sum = 0; // Declare variables n and sum, initialize sum to 0

    cout << "Enter a positive integer: "; // Prompt the user to enter a positive integer
    cin >> n; // Read the input value and store it in n

    int i = 1; // Initialize the counter variable i to 1
    while (i <= n) { // Loop from 1 to n
        sum += i; // Add the value of i to sum
        i++; // Increment the counter variable i
    }

    cout << "Sum of the first " << n << " natural numbers = " << sum << endl; // Output the sum of the first n natural numbers

    return 0; // Return 0 to indicate successful execution
}
