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
     string s;
     cin>>s;
     int count = 0;
     for(int i =0 ;i<s.length(); i++){
         if(s[i]==s[i+1]){
              count++;
         }
     }
      cout<<count<<endl;
   return 0;
}
