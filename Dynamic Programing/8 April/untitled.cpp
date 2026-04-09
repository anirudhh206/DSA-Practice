untitled
#include<bits/stdc++.h>
using namespace std;

int minimumRounds(vector<int> tasks){
    unordered_map<int, int> freq;
    for(int t:tasks){
        freq[t]++;
    }

    int totalRounds=0;
    for(auto it:freq){
        int f= it.second;
        if(f==-1){
            return -1;
        }
        totalRounds+= f/3;
        if(f%3 != 0) totalRounds += 1;
    }
    return totalRounds;

}

int main(){
    int n;
    cin>>n;

    vector<int> tasks(n);
    for(int i=0;i<n;i++){
        cin>>tasks[i];
    }

    cout<<minimimRounds(tasks);
}

