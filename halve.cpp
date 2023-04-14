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

    int n,  cnt=0, total = 0;
    cin>>n;
    int arr[n];
    int ans = 0;
    loop(i, n){
        cin>>arr[i];
    } 
    loop(i, n){
        ans = ans + arr[i];
    }    
    int result = ans/2;
    sort(arr, arr+n);
   for(int i=n-1; i>=0; i--){
        total = total + float(arr[i]/2);
    }
    cout<<total<<endl;
   return 0;
}
