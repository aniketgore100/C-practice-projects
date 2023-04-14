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
    
    int n;
    cin>>n;
    int arr[n];
       map<int, int>mp;
       loop(i, n){
       cin>>  arr[i];
       mp[arr[i]]++;
       }
       for(auto x : mp){
          if(x.second > n/2){
            cout<<x.first<<endl;
          }
           
       }
       cout<<"-1"<<endl;
    

   
   return 0;
}
