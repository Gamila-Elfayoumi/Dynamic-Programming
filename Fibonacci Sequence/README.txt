The sequence follows the rule that each number is equal to the sum of the preceding two numbers.
The Fibonacci sequence begins with the following 14 integers:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ...

First Way:

We can use a classic method to find a Fibonacci number using a recursive function.
The time complexity of calculating the Fibonacci sequence using a simple recursive function is O(2^n).
The problem of the recursive in the Fibonacci is that the recursive method recalculates the Fibonacci values for the same indices multiple times. 
Each call to the function generates two more calls (except f the base cases), leading to an exponential growth in the number of calls with respect to 𝑛.
example:
for F(n), the function calls F(n-1) and F(n-2),
and F(n-1) calls F(n-2) and F(n-3),
and so on.

See the code in the "Fibonacci Recursive".

Second Way:

We can use dynamic programming to achieve the same goal.
