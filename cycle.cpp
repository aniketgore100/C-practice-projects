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

void solve(int arr[], int n){
     vector<int>v;
     v[0] = arr[n-1];                 // 1 2 3 4 5 // 5 1 2 3 4 
     for(int i=0; i<n-2; i++){
         v.push_back(arr[i]);
     }
     for(int i = 1; i<v.size(); i++){
         cout<<v[0]<<v[i]<<" ";
     }
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      int n;
      cin>>n;
      int arr[n];
      loop(i, n){
          cin>>arr[i];
      }
   
    solve(arr, n);
   return 0;
}
