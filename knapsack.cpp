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

int knapsack(int weight[], int value[], int m, int n){
    if(n == 0 || m == 0){
        return 0;
    }

    if(weight[n-1] > m){
        return knapsack(weight, value, m, n-1);
    }
    else{
        return max(value[n-1]+knapsack(weight, value, m-weight[n-1],  n-1), knapsack(weight, value, m,  n-1));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

      int n,m;
      cin>>n>>m;
      int weight[n];
      int value[n];
      loop(i, n){
         cin>>value[i];       // value array
        }
      loop(i, n){
         cin>>weight[i];      // weight array 
        }
       
       cout<< knapsack(weight, value, m, n);
   return 0;
}
