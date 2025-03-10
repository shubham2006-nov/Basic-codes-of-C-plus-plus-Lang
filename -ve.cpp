// Program that asks the user to input a number
// If the number is negative, the program will terminate

#include <iostream> // Include the iostream library for input and output operations

using namespace std; // Use the standard namespace

int main() {
    int num; // Declare an integer variable to store the user input

    while (true) { // Start an infinite loop
        cout << "Enter a number: "; // Prompt the user to enter a number
        cin >> num; // Read the user input and store it in the variable 'num'

        if (num < 0) { // Check if the entered number is negative
            cout << "Negative number entered. Terminating program." << endl; // Print a message indicating termination
            break; // Exit the loop if the number is negative
        }

        // You can add any other operations here if needed
    }

    return 0; // Return 0 to indicate successful program termination
}
