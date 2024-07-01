#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int mincostTickets(vector<int>& days, vector<int>& costs) {

    vector<int> dp(366, INT_MAX);
    dp[0] = 0;

    unordered_set<int> days_set(days.begin(), days.end());
    int last_day = days.back();

    for (int i = 1; i <= last_day; i++) {
        if (days_set.find(i) == days_set.end()) {
            dp[i] = dp[i - 1];
        }
        else {
            dp[i] = min({
                dp[i - 1] + costs[0],
                dp[max(0,i - 7)] + costs[1],
                dp[max(0,i - 30)] + costs[2]
                });
        }
    }
    return dp[last_day];
}

int main()
{
    int n;
    cout << "Enter the number of travel days: "<<endl;
    cin >> n;

    vector<int> days(n);
    cout << "Enter the travel days"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }

    vector<int> costs(3);
    cout << "Enter the cost of 1 day, 7 days, 30 days:" << endl;
    for (int i = 0; i < 3; i++) {
        cin >> costs[i];
    }

    int result = mincostTickets(days, costs);
    cout << "Minimum cost for tickets: " << result << endl;
    system("pause");
}