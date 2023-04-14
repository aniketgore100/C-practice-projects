
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

        ll n;
        cin>>n;
        ll a[n];
        loop(i, n)
        cin>>a[i];
        ll sum = 0;
        for(int i=0; i<n-1; i++){
          if(a[i]>a[i+1]){
             sum = sum + abs(a[i]-a[i+1]);
             a[i+1] = a[i];
        }
        }
         cout<<sum<<endl;
   
   return 0;
}
