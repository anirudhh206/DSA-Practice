#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>sum>>n;

    vector<int>coin(n);
    for(int i=0;i<n;i++){cin>>coin[i];}
    
    vector<int>dp(sum+1,0);
    dp[0]=1;

    for(int coin:coin){
        for(int j=coin;j<=sum;j++){
            dp[j]+=dp[j-coin];
        }
    }
    cout<<dp[sum];
}