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

        ll n,m,p,q;
        cin>>n;
        ll a[n+2];
        ll k1=2;
        ll k2=1;
        ll count=0;
        for(ll i=n;i>=1;i--){
	      if(count%2==0){
		  a[i]=k1;
		  k1=k1+2;
	}
	      else{
		    a[i]=k2;
		    k2=k2+2;
	}
	count++;
}
        for(ll i=1;i<=n;i++)
          cout<<a[i]<<" ";
          cout<<endl;
}
   
   return 0;
}
