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
#define loop1(i,m) for(int i=0; i<m; i++)
#define loop2(i,n) for(int i=1; i<=n; i++)

int solve(int arr[], int n, int arr2[], int m){
      set<int> st;
      for(int i=0;i<n;i++){
          st.insert(arr[i]);
      }
      for(int i=0;i<m;i++){
          st.insert(arr2[i]);
      }
     cout<< st.size();
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      int n, m;
      cin>>n>>m;
      int arr[n], arr2[m];
      loop(i, n){
          cin>>arr[i];
      }

      loop(i, m){
          cin>>arr2[i];
      }
      
      solve(arr, n, arr2, m);

   
   return 0;
}
