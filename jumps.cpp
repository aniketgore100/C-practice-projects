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


int solve(int v[], int n){
     int count = 0;
     if(n == 1){
            cout<< 0;
     }
        if (v[0] == 0){
            cout<< -1;
        }
    loop(i, n){
         if(v[i] <= n){
             count++;
             i += v[i];
         }
    }
   cout<< count;
}

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
    int v[n];
    loop(i, n){
        cin>>v[i];
    }
      solve(v, n);
    }
   return 0;
}
