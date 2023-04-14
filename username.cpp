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

      int n;
      cin>>n;
      int best, worst, count = 0;
      worst = best;
      while(n--){
          int a;
          cin>>a;
          if(a<worst){
              worst = a;
              count++;
          }
          if(a>best){
              best = a;
              count++;
          }
      }
   cout<<count<<"\n";
   return 0;
}
