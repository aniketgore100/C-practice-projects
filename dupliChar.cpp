#include <bits/stdc++.h>
using namespace std;

int dupli(string s){
    map<char, int>mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;                                       // finding duplicate characters alphabetically
    }                                                    // Time Complexity: O(N log N) using MAP
    for(auto it : mp){                                  //  Space Complexity: O(K), where K = size of the map 
        if(it.second > 1)
        cout<<it.first<<"="<<it.second<<"=";                
    }                                                    // time complexity using unordered_map is O(N);
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    dupli(s);
    }
}