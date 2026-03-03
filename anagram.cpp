#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool anagram(string s, string r){
    if(s.size()!=r.size())
    return false;
    sort(s.begin(), s.end());
    sort(r.begin(), r.end());
    return s==r;    
}

int main(){
    cout << boolalpha; 
    cout << anagram("anagram", "nagaram") << endl; // true 
    cout << anagram("rat", "car") << endl; // false
}