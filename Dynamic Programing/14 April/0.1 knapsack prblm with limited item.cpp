#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, W, K;
    cin >> n >> W >> K;

    vector<int> wt(n), val(n);
    for(int i = 0; i < n; i++){
        cin >> wt[i] >> val[i];
    }

    vector<vector<int>> dp(W + 1, vector<int>(K + 1, 0));

    for(int i = 0; i < n; i++){
        for(int w = W; w >= wt[i]; w--){
            for(int k = K; k >= 1; k--){
                dp[w][k] = max(dp[w][k],
                               val[i] + dp[w - wt[i]][k - 1]);
            }
        }
    }

    cout << dp[W][K] << endl;
}