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
 // Aniket Gore ID : 844321

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     int t;
    cin>>t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      int arr[n];
      int sum = 0, ans = 0;
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
         sort(arr, arr+n);
          for(int i=0; i<n; i++){
            sum += arr[i];
        }
        
        for(int i=0; i<k; i++){
            ans = ans + arr[i]; 
        }
        ans = ans*2;
        cout<< sum-ans<<endl;
    }
    return 0;
      
   
   return 0;
}
