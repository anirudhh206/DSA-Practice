#include<bits/stdc++.h>
using namespace std;

struct job{
    int id, deadline, profit;

};

bool cmp(job a, job b){
    return a.profit>b.profit;
}

int main(){
    int n;
    cin>>n;
    vector<job> job(n);
    for(int i=0;i<n;i++){
        cin>>job[i].id;
        cin>>job[i].deadline;
        cin>>job[i].profit;
    }
    sort(job.begin(), job.end(), cmp);

    int maxdeadline=0;
    for(auto &job:job){
        maxdeadline=max(maxdeadline, job.deadline);
    }

    vector<int> slot(maxdeadline+1, -1);
    int count=0, totalprofit=0;
    for(auto &job: job){
        for (int j=job.deadline;j>0;j++){
            if(slot[j]==-1){
                slot[j]=job.deadline;
                count++;
                totalprofit+=job.profit;
                break;
            }
        }
    }
    cout<<count<<" "<<totalprofit;
}