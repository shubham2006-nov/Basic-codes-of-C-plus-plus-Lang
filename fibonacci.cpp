// printing n numbers of fibonacci numbers
#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fib(int n);

int main()
{
    // Call the fib function with 6 and ignore the result
    fib(6);
    return 0;
}

// Function definition for calculating the nth Fibonacci number
int fib(int n)
{
    // Base case: if n is 0, return 0
    if (n == 0)
    {
        return 0;
    }
    // Base case: if n is 1, return 1
    if (n == 1)
    {
        return 1;
    }

    // Recursive call to calculate (n-1)th Fibonacci number
    int fibNm1 = fib(n - 1);
    // Recursive call to calculate (n-2)th Fibonacci number
    int fibNm2 = fib(n - 2);

    // Calculate the nth Fibonacci number
    int fibN = fibNm1 + fibNm2;
    // Print the nth Fibonacci number
    cout << " fib of " << n << " is " << fibN << endl;
    // Return the nth Fibonacci number
    return fibN;
}