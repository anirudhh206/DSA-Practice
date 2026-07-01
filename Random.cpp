#include<bits.stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>start(n), end(n);
    for (int i=0;i<n;i++)cin>>start[i];
    for(int i=0;i<n;i++)cin>>end[i];
    vector<pair<int,int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({end[i],start[i]});
    }

    sort(activities.begin(),activites.end(),[](pair<int,int> a, pair<int,int> b){
        return a.first<b.first;
    });
    int count=0;
    int last_end=-1;
    for(auto &activity:activities){
        int start_time=activity.first;
        int end_time=activity.second;
        if(start_time>=last_end){
            count++;
            last_end=end_time;

        }
    }
    cout<<count<<endl;
    
}