#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod (100000007)
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second 
#define loop(i,n) for(int i=0; i<n; i++)

char solve(string s)
{
   unordered_map<char,int>m;
       char ch;
       for(int i=0;i<s.length();i++){
           m[s[i]]++;
       }
       for(int i=0;i<s.length();i++){
           if(m[s[i]]>=2){
               return s[i];
           }
       }
       return '#';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s;
    cin>>s;
    // unordered_map<char, int>mp;
    // for(int i=0; i<s.length(); i++){
    //     mp[s[i]]++;
    // }  
    //  for(int i=0; i<s.length(); i++){
    //     if(mp[s[i]]>=2){
    //         return s[i];
    //     }
    //     return -1;
    //  }
    // sort(s.begin(), s.end());
    // cout<<s<<endl;
     cout<<solve(s);
}
