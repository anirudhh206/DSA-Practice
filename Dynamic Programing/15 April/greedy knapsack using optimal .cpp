#include<bits/stdc++.h>
using namespace std;

struct Item{
    int weight, value;
    double ratio;
};

bool cmp(Item a, Item b){
    if(a.ratio == b.ratio)
        return a.weight > b.weight;

    return a.ratio>b.ratio;
}

pair<double, int> fractionalknapsack(vector<Item>& items, int w){
    int n=item.size();
    for(int i=0;i<n;i++){
        item[i].ratio = (double)items[i].value/ items[i].weight;
    }
    sort(item.begin(), item.end(), cmp);
    double totalweight=0.0;
    int currentweight=0;
    int itemcount=0;
    for(int i=0;i<n;i++){
        if(currentweight+item[i].weight<=W){
            currentweight+=item[i].weight;
            totalvalue+=item[i].value;
            itemcount++;
        }else{
            int remaining=W-currentweight;
            if(remaining>0){
                totalvalue+=item[i].ratio*remaining;
                itemcount++;
            }
            break;
        }
    }
    return {totalvalue,itemcount};
}

int main(){
    int n,W;
    cin>>n>>W;
    vector<Item> items(n);
    for(int i=0;i<n;i++){
        cin>>items[i].weight>>items[i].value;
    }
    auto result= fractionalknapsack(items,W);
    cout<<fixed<<setprecision(2)<<result.first<<" "<<result.second;
    reuturn 0;
}