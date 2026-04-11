

#include<bits/stdc++.h>
using namespace std;


int mai(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int,int> dp(n, vector<int>(n,0));

    for(int len=2;len<n;len++){
        for{int i=0;i<n-len+1,len++}{
            int j= i+len-1;
            dp[i][j] = INT_MAX;
            for(int k=i;k<j;k++){
                int cost= dp[i][k] + dp[k+1][j] + arr[i-1] *arr[k] *arr[j];
                dp[i][j] = ji
            }
        }
    }
    cout<dp[i][n-1];
}