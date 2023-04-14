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
    int n, p , x, y, ans = 0;
    cin>>n>>p>>x>>y;
     int arr[n];
      loop(i, n){
          cin>>arr[i];
      }
    for(int i=0; i<p; i++){
        if(arr[i] == 1)
            ans += y;
        else
            ans += x;
        
    }
    cout<<ans;
}
   return 0;
}
