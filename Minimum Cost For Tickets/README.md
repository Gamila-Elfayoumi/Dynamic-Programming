LeetCode Problem (983):
Minimum cost for tickets

You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.
Train tickets are sold in three different ways:
a 1-day pass is sold for costs[0] dollars,
a 7-day pass is sold for costs[1] dollars, 
and a 30-day pass is sold for costs[2] dollars.
The passes allow that many days of consecutive travel.

For example, 
if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
Return the minimum number of dollars you need to travel every day in the given list of days.


Answer steps:

1. Identify the problem structure:
      * You need to travel on specific days within a year.
      * There are three types of passes: 1-day, 7-day, and 30-day.
      * Each pass covers a different number of consecutive days.

2. Dynamic Programming (DP) Approach:
      1. DP Array Initialization:
                * dp is a vector of size 366 (to handle days from 1 to 365) initialized to 
                  INT_MAX to represent uncalculated states.
                * dp[0] is initialized to 0 because no cost is required before any travel 
                  starts.
      2. Iterate Through Each Day:
                * Use a loop from day 1 to the last travel day (the maximum value in the days 
                  array).

3. Transition between states:
     1. Check if It's a Travel Day:
        * Use a set days_set to quickly check if a particular day is a travel day.
        * If the current day i is not in days_set, carry forward the previous day's cost (dp[i] 
          = dp[i-1]).
        * If it is a travel day, calculate the minimum cost using the three types of passes:
           - 1-day pass: dp[i-1] + costs[0]
           - 7-day pass: dp[max(0, i-7)] + costs[1]
           - 30-day pass: dp[max(0, i-30)] + costs[2]
     2. Choose Minimum Cost:
        * Use std::min to find the minimum cost among the three options for dp[i].

4.Result: 
    * The final answer is dp[last_day], where last_day is the last travel day in the input 
      array days.
