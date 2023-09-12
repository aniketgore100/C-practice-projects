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

bool binarySearch(int arr[], int s, int e, int k){
 if(s>e){
    return false;
 }
 int mid = s + (e-s)/2;

 if(arr[mid]==k){
    return mid;
 }

 if(arr[mid] < k){
    return binarySearch(arr, mid+1, e, k);
 }
 else{
        return binarySearch(arr, s, mid-1, k);
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
      int k;
      cin>>k;
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      cout<< binarySearch(arr, 0, n-1, k);
    
   return 0;
}
