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


void prime(int n){
    int spf[100] = {0};
    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i]==i){
            for(int j = i*i; j<=n; j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    int n; cin>>n;
     prime(n); 
   
   return 0;
}
