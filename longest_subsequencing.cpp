#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    string B;
    string C;

    int p = A.size();
    int m = B.size();
    int n = C.size();

    vector<vector<vector<int>>> dp(p + 1, vector < vector<int>(m + 1, vector<int>(n + 1, 0)));

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (A[i - 1] == B[j - 1] && A[i - 1] == C[k - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1][k - 1];
                }
                else
                {
                    dp[i][j][k] = max({dp[i - 1][j][k],
                                       dp[i][j - 1][k],
                                       dp[i][j][k - 1]});
                }
            }
        }
    }
    cout << dp[p][m][n];
}
