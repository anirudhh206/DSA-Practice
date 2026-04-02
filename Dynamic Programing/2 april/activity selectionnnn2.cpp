#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> start(n);
    vector<int>end(n);

    for(int i=0;i<n;i++)cin>>start[i];
    for(int i=0;i<n;i++)cin>>end[i];

    vector<pair<int,int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }
    sort(activities.begin(),activities.end(),[](auto &a, auto &b){return a.second<b.second});

    int count=0;
    int last_end=INT_MIN;
    for(auto &act:activities){
        int s=act.first;
        int e=act.second;
        if(s > last_end){
            count++;
            last_end=e;
        }
    }
    cout << count;
}