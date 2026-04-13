#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value, weight;
};

bool cmp(Item a, Item b){
    double x1= (double) a.value/a.weight;
    double x2= (double) b.value/b.weight;
    return x1>x2;
}

double fractionalknapsack(int W, vector<int>&items){
    sort(items.begin(), items.end(), cmp);
    double totalvalue=0.0;
    for(auto &item:items){
        if(W>=item.weight){
            totalvalue += item.weight;
            w -= item.weight;
        }
        else{
            totalvalue += (double)item.value*W/item.weight;
            break;
        }
    }
    return totalvalue;
}

int main(){
    int n,W;
    cin>>n>>W;
    vector<Item> items(n);
    for(int i=0;i<n;i++){
        cin>> items[i].value>>items[i].weight;
    }
    cout<<fixed<<setprecision(6)<<fractionalknapsack(W,items);
    
}