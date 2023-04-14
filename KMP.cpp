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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        map<int, int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        for(auto i: mp){
           cout<<i.second<<" ";
    }      
   
   return 0;
}
