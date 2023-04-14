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
     while (t--)
     {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int i = 0;
    while(i<n && i+1<n-1){
      if(s[i]==s[i+1]){
          count++;
          i = i+2;
      }
       else{
           count++;
           i++;
       }
    }
    if(n-1==i){
        count++;
    }
    cout<<count<<endl;
     }
   return 0;
}
