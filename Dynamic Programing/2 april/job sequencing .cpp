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
    vector<job> jobs(n);
    for(int i=0;i<n;i++){
        cin>>jobs[i].id >>jobs[i].deadline >> jobs[i].profit;
    }
    sort(jobs.begin(), jobs.end(), cmp);

    int maxDeadline= max(maxDeadline+1, -1)
}