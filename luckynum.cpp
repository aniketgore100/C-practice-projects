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
    vector<int, int>v;
    vector<int, int>::iterator it;
    int n;
    int arr[n];
    int a, b;
    cin>>a>>b;
    loop(i, n){
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    bool flag = true;
    for(int i=0; i<n; i++){
        if(v[i]%a==0){
            it = v.begin()+i;
            v.erase(it);
            flag = false;
        }

        else if(v[i]%b==0){
            it = v.begin()+i;
            v.erase(it);
            flag = true;
        }

        if(flag == true){
            cout<<"BOB"<<endl;
        }
        if(flag == false){
            cout<<"AlICE"<<endl;
        }
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




