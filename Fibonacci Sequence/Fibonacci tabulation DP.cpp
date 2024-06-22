#include <iostream>
using namespace std;
// Function to calculate the nth Fibonacci number
int fib(int n) {
    int Fibonacci[n + 1]; // Declare an array to store Fibonacci numbers up to n
    Fibonacci[0] = 1;   // Initialize the first Fibonacci number as 0
    Fibonacci[1] = 1;   // Initialize the second Fibonacci number as 1

    // Calculate Fibonacci numbers from the third number to the nth number
    for (int i = 2; i <= n; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2]; // Fibonacci sequence formula
    }

    return Fibonacci[n]; // Return the nth Fibonacci number
}

// Main function
int main()
{
    int n;
    cout << "Enter a number to calculate his fibonacci: " << endl;
    cin >> n;
    cout << "Fibanacci number is " << fib(n) << endl;
    system("pause");
}