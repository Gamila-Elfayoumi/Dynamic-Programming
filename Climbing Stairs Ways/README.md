LeetCode Problem (70): Climbing Stairs

You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example:
n = 2
There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Answer:
1. Understand the Base Cases:

   * If there are 0 steps, there is only 1 way to stay at the ground (doing nothing): F(0)=1.
   * If there is 1 step, there is only 1 way to reach the top: F(1)=1.

2. Recursive Relationship:

   * To reach step n, you can come from steps n-1 by taking 1 step, or form step n-2 by taking 2 steps.
   * Hence, the total number of ways to reach step n is the sum of the ways to reach step n-1 and the ways to reach step n-2.
    F(n) = F(n - 1) + F(n - 2)
3. Dynamic programming approach:
   * Use an array to store the number of ways to reach each step up to n.
