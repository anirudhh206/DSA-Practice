#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> start(n), end(n);
    for(int i=0;i<n;i++)cin>>start[i];
    for(int i=0;i<n;i++)cin>>end[i];

    vector<pair<int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }
    
}