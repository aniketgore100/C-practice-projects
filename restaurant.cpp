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
    int t, ans = 0, result = 0;
    cin>>t;
    int x, y;
    vector<pair<int, int>>vp;
    while(t--){
        cin>>x>>y;
        vp.push_back({x, true});
        vp.push_back({y, false});
    }
    sort(vp.begin(), vp.end());
    for(int i = 0; i<vp.size(); i++){
        if(vp[i].second == true){
            ans++;
            result = max(result, ans);
        }else{
            ans--;
        }
    }
    cout<<result<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     solve(); 
   
   return 0;
}
