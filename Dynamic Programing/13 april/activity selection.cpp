#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>start(n), end(n);
    for(int i=0;i<n;i++)cin>>start[i];
    for(int i=0;i<n;i++)cin>>end[i];

    vector<pair<int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }

    sort(activities.begin(), activities.end(), [](pair<int, int>a, pair<int, int>b){return a.second>b.second;});

    int count=0;
    int test_end=-1;
    for(auto &act:activities){
        int s = act.first;
        int e = act.second;
        if(s>last_end){
            count++;
            last_end=e;
        }
    }
    cout<< count<< endl;
}