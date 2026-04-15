#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B,C;
    cin>>A>>B>>C;

    int n = A.size();
    int m= B.size();
    int p= C.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>(m+1,vector<int>(p+1,0)));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=p;k++){
                if(A[i-1]==B[j-1] && A[i-1]==C[k-1]){
                    dp[i][j][k]= 1+dp[i-1][j-1][k-1];
                }else{
                    dp[i][j][k]= max({
                        dp[i-1][j][k],
                        dp[i][j-1][k],
                        dp[i][j][k-1]
                    });
                }
            }
        }
    }
    cout<<dp[n][m][p];
}