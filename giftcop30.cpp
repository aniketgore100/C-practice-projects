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
        int n, k, count=0, ans;
        cin>>n>>k;
        int arr[n];
        loop(i, n){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        if(n==1){
            if(arr[0]/2<=k){
                count++;
            }else{
                break;
            }
              cout<<count<<endl;
        }
        else{
             for(int i=0; i<n; i++){
              if(arr[i]<=k){
               count++;
               k = k - arr[i];
           }
        }
          cout<<count<<endl;
        }
    }   
   return 0;
}
