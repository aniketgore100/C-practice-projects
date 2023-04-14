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

     int a,p,q,r,s;
     cin>>a;
do
{
    a++;
    p=a/1000,q=(a/100)%10,r=(a/10)%10,s=a%10;
 
}while
    (p==q || q==r || r==s || s==p || p==r || q==s);
    cout<<a;
return 0;
}
