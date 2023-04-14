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

    ll n;
    cin>>n;
    int a = 0;
    while(n!=0){
        if(n%10==7 || n%10 == 4)
          a++;
          n = n/10;
    }      
    if(a == 7 || a == 4)
      cout<<"YES"<<endl;
    else 
      cout<<"NO"<<endl;
   
   return 0;
}
