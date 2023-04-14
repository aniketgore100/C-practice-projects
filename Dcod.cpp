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
#include <bits/stdc++.h>
using namespace std;

#define ll long long

signed main(){

    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

          ll N, K;
          cin >> N >> K;
          vector<ll> arr(1, 1);
          K -= N;

          ll curr = 2;

          for (int i = 2; i <= N; i++) {
             if (K < arr.size()) {
                 int val = arr[arr.size()- K- 1];
                 arr.push_back(val);
                 break;
            }
              K -= arr.size();
              arr.push_back(curr);
              curr++;
        }

        while (arr.size() < N) {
              arr.push_back(arr.back());
        }

        for(auto x: arr){
              cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}