#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B,C;
    cin>>A>>B>>C;
    int n=A.size();
    int m=B.size();
    int p=C.size();

    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(m+1,vector<int>(p+1,0)));

    for(int i=1;i<n;i++){
        for(int k=1;k<=m;k++){
            for(int j=1;j<=p;j++){
                if(A[i-1]==B[k-1] && A[i-1]==C[j-1]){
                    dp[i][k][j]=1+dp[i-1][k-1][j-1];
                }
                else{
                    dp[i][k][j]=max({dp[i-1][k][j],dp[i][k-1][j],dp[i][k][j-1]});
                }
            }
        }
    }

    cout<<dp[n][m][p]<<endl;
}