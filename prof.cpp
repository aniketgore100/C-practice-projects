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
        int n;
        cin>>n;
    string s;
    cin>>s;
     bool f = false;
    for(int i=0 ; i<n-1; i++){
        if(s[i]==s[i+1]){
           f = true;
           break;
        }
    }
          if(f) cout<<"YES"<<"\n";
          else cout<<"NO"<<"\n";
    }
   return 0;
}
