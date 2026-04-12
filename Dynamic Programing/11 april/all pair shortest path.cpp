#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    const int INF =1e9;
    vector<vector<int>> dist(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dist[i][j];
            if(dist[i][j]== -1 && != j)
             dist[i][j] = INF;
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][k] != INF && dist[k][j] != INF)
            }
        }
    }
}