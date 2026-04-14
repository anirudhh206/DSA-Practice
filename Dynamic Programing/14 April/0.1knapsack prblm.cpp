#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, W;
    cin >> n >> W;

    vector<int> val(n), wt(n);
    for(int i = 0; i < n; i++) cin >> val[i];
    for(int i = 0; i < n; i++) cin >> wt[i];

    vector<int> dp(W + 1, 0);

    for(int i = 0; i < n; i++){
        for(int w = W; w >= wt[i]; w--){
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }

    cout << dp[W] << endl;
}