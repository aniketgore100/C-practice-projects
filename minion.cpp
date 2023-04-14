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


void solve(){
   ll n, ans = 0;
   cin>>n;
   vector<ll>  v = {100, 50, 10, 5 , 2, 1};
   for(ll i = 0; i<6; i++){
      ans += (n/ v[i]);
      n -= (v[i]) * (n / v[i]);
   }
   cout<<ans<<endl;;
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

