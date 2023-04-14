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
    int count = 0;
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    loop1(i, d){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0 ){
               count++;
        }
    }
    cout<<count;
   return 0;
}
