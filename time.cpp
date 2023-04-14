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

      int t;
      cin>>t;
    while(t--){

    double h1, h2, m1, m2, d;
    char ch;
    cin>>h1>>ch>>m1;
    cin>>h2>>ch>>m2;
    cin>>d;
    double diff = (h1-h2) * 60 + (m1 - m2);
    cout<<fixed<<setprecision(1)<<diff + d<< endl;
    if(2*d <= diff){
        cout<<fixed<<setprecision(1)<<diff<<endl;
    }     
    else{
        double ans = (2*d+diff)/2;
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    }
   return 0;
}
