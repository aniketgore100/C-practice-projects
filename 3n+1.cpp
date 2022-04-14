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
void swap(ll &a, ll &b) {
    ll temp = a;
    a = b;
    b = temp;
}

ll max(ll a, ll b) {
    if (a > b)
        return a;
    return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

       ll lower_bound, upper_bound;
    while (cin >> lower_bound >> upper_bound) {
        ll result_lower_bound = lower_bound, result_upper_bound = upper_bound;
        if (lower_bound > upper_bound) {
            swap(lower_bound, upper_bound);
        }
        ll max_path_length = 0;
        for (ll i = lower_bound; i <= upper_bound; i++) {
            ll n = i; 
            ll current_path_length = 0;            
             while (n != 1) {
                if (n % 2 == 0)
                    n /= 2;
                else
                    n = 3 * n + 1; 
                current_path_length++; 
            }
            max_path_length = max(current_path_length, max_path_length); 
        }
        cout << result_lower_bound << " " << result_upper_bound << " " << max_path_length + 1 << endl;
    }
}
