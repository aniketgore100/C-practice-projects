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
#define loop1(i,n) for(int i=1; i<=n; i++)


void solve(){
      int n;
      cin>>n;
      int arr[n];
      int l; cin>>l;
      vector<int>v;
      loop(i, n){
          cin>>arr[i];
          v.push_back(arr[i]);
      }
      sort(arr, arr+n);
      int j = n-1;
      for(int i = 0; i<n; i++){
          if(arr[i]-arr[j]==l){
           v.push_back(i);
           v.push_back(j);
          }
           else{
             j--;
           }
      }
      
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     solve();
   return 0;
}
