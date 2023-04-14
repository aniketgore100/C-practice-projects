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

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr(n+1,0);
    for(ll i = 0; i < 2*n; i++){
        ll x;
        cin>>x;
        arr[x]++;
    }
    for(ll i = 0; i <= n; i++) {
        if(arr[i] == 1) {
            cout<<"NO\n";
            return;
        }
        if(arr[i] == 0) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"YES\n";                      //  CS#!%@
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     int t;
     cin>>t;
     while(t--){
         solve();
     }
      
   return 0;
}
