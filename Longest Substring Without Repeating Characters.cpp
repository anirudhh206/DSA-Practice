#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <unordered_map>
using namespace std;

int length(string s){
    unordered_map<char, int>seen;
    int maxlen=0;
    int left=0;
    for (int right=0;right<s.size();right++){
        char c= s[right];
        if(seen.count(c) && seen[c]>=left){
            left= seen[c]+1;
        }
        seen[c]=right;
        maxlen= max(maxlen, right-left+1);
    }
    return maxlen;
}
int main() { 
    cout << length("abcabcbb") << endl;// 3 ("abc") 
     cout << length("bbbbb") << endl; // 1 ("b") 
     cout << length("pwwkew") << endl; // 3 ("wke") 
     }