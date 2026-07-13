#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;
    for (int coin : coins)
    {
        for (int j = coin; j <= sum; j++)
        {
            dp[j] += dp[j - coin];
        }
    }
    cout << dp[sum];
}
