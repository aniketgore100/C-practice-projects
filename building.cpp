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
   long long n,m;  
   cin>> n >>m;

   ll temp = 2;
   ll cnt  = 0;
  while(temp <= n){
    temp <<= 1;
    cnt++;
  }
                                     //CS#!%@
    temp /= 2;
    long long one = cnt+1;
  if(one > m){
     cout<< 0 <<endl;
     return;
  }

  if(temp == n){
     cout<<1 + (m-one)<<endl;
  }
  else{
     cout<<(m - one)<<endl;
 }
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
