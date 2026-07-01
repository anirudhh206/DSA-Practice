#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<job>jobs(n);
    for(int i=0;i<n;i++){
        cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
    }
    sort(job.begin(),job.end(),compare);

    int maxdeadline=0;
    for(auto &job:jobs){
        maxDeadline=max(maxdeadline, job.deadline);
    }

    
}