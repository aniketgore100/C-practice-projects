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
      int arr[n];
      int lucky = 0, unlucky = 0;
      for(int i=0; i<n; i++){
          cin>>arr[i];
      }
      for(int i=0; i<n; i++){
          if(arr[i]%2==0){
              lucky++;
          }
          else{
              unlucky++;
          }
      }
       if(lucky>unlucky){
              cout<<"READY FOR BATTLE"<<endl;
          }
          else{
              cout<<"NOT READY"<<endl;
          }
   
   return 0;
}
