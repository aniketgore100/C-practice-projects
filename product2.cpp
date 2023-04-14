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

      int t;
      cin>>t;
      while(t--){
          int b, c;
          cin>>b>>c;
          int a = 1;
          int grt = max(b, c);
         
          if(a*b%c==0){
              cout<<a<<endl;
              break;
          }
          else{
              a++;
          }
      }
      
   
   return 0;
}
