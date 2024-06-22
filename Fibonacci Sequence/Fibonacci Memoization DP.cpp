#include<iostream>
#include<unordered_map>
using namespace std;
int Fibonacci(int n) {
    unordered_map<int, int>memo;
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (memo.find(n) != memo.end()) return memo[n];
    memo[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return memo[n];
}
int main() {
    int n;
    // Prompt the user to enter a number
    cout << "Enter a number to calculate its Fibonacci: " << endl;
    cin >> n;
    // Output the result of the Fibonacci function
    cout << "The Fibonacci of " << n << " is " << Fibonacci(n) << endl;
    system("pause");
}a