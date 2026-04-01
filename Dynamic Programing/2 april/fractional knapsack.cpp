#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value, weight;
};

bool cmp(Item a, Item b){
    double x1 = (double)a.value / a.weight;
    double x2 = (double)b.value / b.weight;
    return x1 > x2;
}

double fractionalKnapsack(int W, vector<Item>& items){
    sort(items.begin(), items.end(), cmp); // sort items based on the value/weight ratio(descending)
    double totalvalue = 0.0; //stores final answer 
    for (auto &item : items){ //iterates through sorted items
        if(W>=item.weight){  // check if full item can fit in remaining capacity
            totalValue += item.value;  // add full value of item
            W -= item.weight;          // reduce remaining capacity
        }
        else{           
            totalValue += (double)item.value * W/item.weight;  // take fraction of item
            break;          // value per unit = value/weight
                            // fractional value = (value/weight) * remaining capacity
        }
    }
    return totalValue;
}
int main(){
    int n,W;
    cin >> n >> W;
    vector<Item> items(n);
    for (int i=0;i<n;i++){
        cin>> items[i].value>>items[i].weight;
    }
    cout<<fixed<<setprecision(6)<<fractionalknapsack(W,items);
}


// IMPORTANT CONCEPTS
/* 
for(auto &item : items)
==>> we have used auto here because what it does is it tells the compiler to automatically figure outs the type


      Syntax	                             Use case
   auto item	                When you don’t want to modify and copying is fine
   auto &item                  When you want efficiency or modification
   const auto &item            Best when you only read (no modification, no copy)


*/