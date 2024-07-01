#include <iostream>
#include <vector>
using namespace std;
int climbStairs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    vector<int> ways(n + 1);
    ways[0] = ways[1] = 1;
    for (int i = 2; i <= n; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    return ways[n];
}
int main()
{
    int n;
    cout << "Enter the number of steps: " << endl;
    cin >> n;

    cout << "Number of Ways to climb " << n << " steps: " << climbStairs(n) << endl;
    system("pause");
}

