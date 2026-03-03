#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twosum(vector<int>& num, int target){
    unordered_map<int,int> seen; // value -> index
    
    for(int i=0; i<num.size(); i++){
        int complement = target - num[i]; // what do I need?
        
        if(seen.count(complement)){ // have I seen it before?
            return {seen[complement], i};
        }
        
        seen[num[i]] = i; // store current number
    }
    return {};
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twosum(arr, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
// ```

// - Time complexity: **O(n)** — one loop
// - Space complexity: **O(n)** — hashmap storage

// ---

// ## What changed:
// For each number we check if `target - num[i]` already exists in our map:
// ```
// i=0: num[0]=2, need 9-2=7, seen={},  7 not found, store {2:0}
// i=1: num[1]=7, need 9-7=2, seen={2:0}, 2 found! return {0,1} ✅