#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> start;
    vector<int>end;

    for(int i=0;i<n;i++)cin>>start[i];
    for(int i=0;i<n;i++)cin>.end[i];

    vector<pair<int,int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }
    sort(activities.begin(),activities.end(),[](auto &a, auto &b){return a[1]<b[1]});

    int count=0;
    int last_end=INT_MIN;
    for(auto &act:activities){
        int s=act[0];
        int e=act[1];
        if(s > last_end){
            count++;
            last_end=e;
        }
    }
}