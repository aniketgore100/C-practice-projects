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

      int t;
      cin>>t;
      while(t--){
          int n; cin >> n;
          map<int, int> m;
          for (int i = 0; i < n; i++) {
            int x; cin >> x;
            m[x]++;
        }
          int ans = n, cnt = 0;
           for (auto u : m) {
             ans = min(ans, n - u.second);
              cnt++;
           }
                 if (cnt >= 2) {
                  ans = min(ans, n - 2);
                }
                    cout << ans << '\n';
                }
   return 0;
}
