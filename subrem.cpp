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
    int n0=0,n1=0;
    loop(i, n){
       int input;
       cin>>input;
       if(input==1) n1++;
       else n0++;
       }  
   int ans=0; 
   int temp=min(n0,n1);
   ans+=temp;
   temp=max(n1-temp,0)/3;
   ans+=temp;
   cout<<ans<<endl;
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


