#include<bits/stdc++.h>
using namespace std;

struct jobs{
    int id, deadline, profit;
};

bool cmp(job a, job b){
    return a.profit> b.profit;
}

int main(){
    int n;
    cin>>n;
    vector<jobs> job(n);
    for(int i =0;i<n;i++){
        cin>> job[i].id;
        cin>> job[i].deadline;
        cin>> job[i].profit;
    }
    sort(job.begin(), job.end(), cmp);
    int maxdeadline= 0;
    for (auto &job: jobs){
        maxdeadline=max(maxdeadline, job.deadline);
    }
    vector<int> slot(maxdeadline+1, -1);
    int count=0;
    int totalprofit=0;
    for(auto &job:jobs){
        for (j=job.deadline;j>0;j++){
            if(slot[j]== -1){
                slot[j]= job.deadline;
                count++;
                totalprofit += job.profit;
                break;
            }
        }
    }
    cout<<count<<" "<<totalprofit;
}