#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& freq, int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++)
        s += freq[k];
    return s;
}

int main() {
    int n;
    cin >> n;

    vector<int> keys(n), freq(n);
    for (int i = 0; i < n; i++) cin >> keys[i];
    for (int i = 0; i < n; i++) cin >> freq[i];

    vector<vector<int>> dp(n, vector<int>(n, 0));

    // single elements
    for (int i = 0; i < n; i++)
        dp[i][i] = freq[i];

    // length of subarray
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k <= j; k++) {
                int left = (k > i) ? dp[i][k - 1] : 0;
                int right = (k < j) ? dp[k + 1][j] : 0;

                int cost = left + right + sum(freq, i, j);
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << dp[0][n - 1];
}