#include<bits/stdc++.h>
using namespace std;
struct job{
    int id, deadline, profit;
};

bool cmp(job a, job b){
    return a.profir>b.profit;
};

int main(){
    int n;
    vector<job> job(n);
    for(int i=0;i<n;i++){
        cin>>job[i].id>>job[i].deadline>>job[i].profit;
    }
    sort(job.begin(), job.end(), cmp);
    int maxDeadline=0;
    for(auto &job:job){
        maxDeadline= max(maxDeadline, job.deadline);
    }
    int count=0;
    int totalprofit=0;
    vector<int> slot(maxDeadline,job.deadline);
    for(auto &job:job){
        for(int j=job.deadline;j>0;j--){
            if(slot[j]==-1){
                slot[j]=job.id;
                count++;
                totalprofit+=job.profit;
                break;
            }
        }
    }
cout<<count<<" "<<totalprofit;
}