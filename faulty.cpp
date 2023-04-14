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

int Fal(int n,  float sum,  int ind,  int *arr){
 if(sum == 0 ) 
   return 1;                                              //Sub-array of integers with given sum
 if(ind>=n) 
   return 0;
 return (Fal(n, sum-arr[ind], ind+1, arr) or Fal(n, sum+arr[ind], ind+1, arr));   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,sum,f=0;  
    cin>>n;
    string str;
    cin>>sum>>str;
    int arr[n];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
 }
    for(int i=0;i<n;i++){
       f = Fal(n,sum,i,arr);
        if(f==1){ 
         break;
    }
  }
    if(f==1) cout<<("Possible");
    else cout<<("Not Possible");
  return 0;
}
