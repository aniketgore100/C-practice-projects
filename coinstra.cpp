// #include <bits/stdc++.h>
// using namespace std;
// #define endl ("\n")
// #define pi (3.141592653589)
// #define mod (100000007)
// #define ll long long 
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second 
// #define loop(i,n) for(int i=0; i<n; i++)
// #define loop1(i,n) for(int i=1; i<=n; i++)

// void solve(){
//     int n;
//     cin>>n;
//     int ans = 0;
//     for(int i=1; i<=n; i++){
//         n = n-i;
//         if(n<=i){
//             ans = i;
//         }
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//       int t;
//       cin>>t;
//       while(t--){
//           solve();
//       }
   
//    return 0;
// }

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

bool check(ll x, ll n)
{
    return ((x * (x + 1))/2 <= n);
}

void solve(){
    int n;
    cin>>n;
    ll s = 1, r = 1e5;
    ll ans = -1;

    while(s <= r)
    {
        ll mid = s + (r - s)/2;
        if(check(mid, n))
        {
            ans = max(ans, mid);
            s = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
      
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
   solve();
   return 0;
}
