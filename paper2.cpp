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

int func1(ll a, ll b){
  return ((a % mod) + (b % mod)) % mod;
}
int func2(ll a, ll b){
  return ((a % mod) * 1LL * (b % mod)) % mod;
}

int powerEx(ll a, ll b){
  a %= mod;
  ll res = 1;
  while (0 < b){
  if (b & 1){
   res = res * 1LL * a % mod;
  }
  a = a * 1LL * a % mod;
  b >>= 1;
 }
 return res;
}


int func3(long long x){
  return powerEx(x, mod - 2);
}

int examPaperDis(ll n, ll k){
  k = n - k;
  int solution = 1;
  if (k == 0 or k == 1){
  return solution;
 }

 solution = solution + func2(func2(n, n - 1), func3(2));
 if (k == 2){
  return solution;
 }
 solution = solution +  func2(func2(n, func2(n - 1, n - 2)), func3(3));
 if (k == 3) {
  return solution;
 }
 int temp = func2(n, func2(n - 1, func2(n - 2,  n - 3)));
 solution = func1(solution, func2(temp, func3(8)));
 solution = func1(solution, func2(temp, func3(4)));
 return solution;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,k;
    cin>>n;
    k=1;
    cout<<examPaperDis(n, k);
   
   return 0;
}

