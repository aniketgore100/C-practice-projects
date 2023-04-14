#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    ll T;
    cin>>T;
    set<ll> X;
    set<ll> Y;
    while(T--){
        ll A,B;
        cin>>A>>B;
        X.insert(A);
        Y.insert(B);
    }
    cout<<(X.size()+Y.size())<<"\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}