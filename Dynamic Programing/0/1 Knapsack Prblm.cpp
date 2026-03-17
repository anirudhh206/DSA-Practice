#include<iostream>
#include<vector>
using namespace std;

int knapsack(vector<int>&weight, vector<int>&value, int W){
    int n= weight.size();
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));

    for(int i=1;i<=n;i++){
        for(int w=1;w<=W;w++){
            if(weight[i-1]<=w){
                dp[i-1][w]= max(value[i-1]+dp[i-1][w-weight[i-1]], dp[i-1][w]);
            }
            else{
                dp[i][w]= dp[i-1][w];
            }
        }
    }
    return dp[n][W];
}

int main(){
    
}