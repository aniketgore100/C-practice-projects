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

void solve(){
    int n;
    cin>>n;
    if(n==3){
        cout<<"3 "<<"2 "<<"1 ";
    }
    else{
        cout<<n-1<<" "<<n-2<<" ";
        for(int i=1; i<n-2; i++){
            cout<<i<<" ";
        }
        cout<<n<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }      
   
   return 0;
}
