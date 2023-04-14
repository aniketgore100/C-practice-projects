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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin>>t;

while(t--){
    int a,b, a1,b1, a2,b2;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if(a+b==a1+b1)
      cout<<1<<"\n";
      else if(a+b==a2+b2)
       cout<<2<<"\n";
    else 
      cout<<0<<"\n";
}
   return 0;
}
