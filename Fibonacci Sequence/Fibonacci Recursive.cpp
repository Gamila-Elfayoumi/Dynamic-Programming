#include <iostream>
using namespace std;

// Recursive function to calculate the Fibonacci number
int Fibonacci(int n) {
    // Base cases: if n is 0 or 1, return 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: Fibonacci(n) is the sum of the two preceding numbers
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n;
    // Prompt the user to enter a number
    cout << "Enter a number to calculate its Fibonacci: " << endl;
    cin >> n;
    // Output the result of the Fibonacci function
    cout << "The Fibonacci of " << n << " is " << Fibonacci(n) << endl;
    system("pause");
}