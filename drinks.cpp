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

      int n;
      cin>>n;
      double sum = 0.0, ans = 0.0;
      int arr[n];
      loop(i, n){
          cin>>arr[i];
      }
      loop(i, n){
          sum += arr[i];
      }
      ans = sum/n;
      cout<<fixed<<setprecision(12)<<ans<<"\n";
   
   return 0;
}
