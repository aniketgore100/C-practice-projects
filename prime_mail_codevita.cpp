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
#define loop2(j,n) for(int i=2; i<n; i++)


bool isitprime(int n);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int count=0,i,n,ans=1;
    cin>>n;
    while(n>1)
    {
        count=0;
        ans++;
        loop1(i, n){
          if(isitprime(i))
          count+=1;
        }n=n-count;
    }cout<<ans;
    return 0;
}

bool isitprime(int n){
      if(n==1||n==0) 
        return false;
      {
        loop2(j,n){
         if(n%i==0) 
           return false;
        }
      }
      return true;
}