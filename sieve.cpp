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

void sieve(int n){
    int prime[100] = {0};
    int count = 0;
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            for(int j = i*i; j<=n; j+=i){
                prime[j] = 1; 
            }
        }
    }
    
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            count++;
            cout<<i<<" ";
        }
    }cout<<endl;
    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n ; cin>>n;
    sieve(n);   
   
   return 0;
}
