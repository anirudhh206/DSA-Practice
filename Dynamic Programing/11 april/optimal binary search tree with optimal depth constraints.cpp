#include <bits/stdc++.h>
using namespace std;

int n, maxD;
vector<int> freq;
int dp[105][105][105]; // dp[i][j][depth]

int solve(int i, int j, int depth) {
    // Step 1: if depth exceeds limit → invalid
    if (depth > maxD) return INT_MAX;

    // Step 2: if no nodes
    if (i > j) return 0;

    // Step 3: if already solved
    if (dp[i][j][depth] != -1) return dp[i][j][depth];

    int ans = INT_MAX;

    // Step 4: try every k as root
    for (int k = i; k <= j; k++) {

        int left = solve(i, k - 1, depth + 1);
        int right = solve(k + 1, j, depth + 1);

        // if invalid subtree
        if (left == INT_MAX || right == INT_MAX) continue;

        int cost = left + right + freq[k] * depth;

        ans = min(ans, cost);
    }

    return dp[i][j][depth] = ans;
}

int main() {
    cin >> n >> maxD;

    vector<int> keys(n);
    for (int i = 0; i < n; i++) cin >> keys[i];

    freq.resize(n);
    for (int i = 0; i < n; i++) cin >> freq[i];

    memset(dp, -1, sizeof(dp));

    int res = solve(0, n - 1, 1);

    if (res == INT_MAX) cout << -1;
    else cout << res;

    return 0;
}