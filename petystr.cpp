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

    string s1, s2;
    cin>>s1>>s2;
    int n = s1.length();
    loop(i, n){
        if(s1[i]<92){
            s1[i] += 32;
        }
        if(s2[i]<92){
            s2[i] += 32;
        }
    }      
   if(s1<s2){
       cout<<-1;
   }
    if(s1>s2){
       cout<<1;
   }
    if(s1==s2){
       cout<<0;
   }
   return 0;
}
