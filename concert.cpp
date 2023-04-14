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

      int n, m;
      cin>>n>>m;
      multiset<int>ms;
      loop(i, n){
          int x;
          cin>>x;
          ms.insert(x);
      }
      for(int i=0; i<m; i++){
          int t;
          cin>>t;
          auto it = ms.upper_bound(t);
          if(it == ms.begin()){
              cout<< -1;
          }
          else{
              it--;
              cout<<*it;
              ms.erase(it);
          }
          cout<<endl;
      }
   
   return 0;
}
