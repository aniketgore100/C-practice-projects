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

void facc(int arr[],int n, int x){
     cout<< x+2;   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //   int n;
    //   cin>>n;
    //   int key;
    //   cin>>key;
    //   int arr[n];
    //   loop(i, n){
    //       cin>>arr[i];
    //   }
    //   cout<<facc(arr, n, key);
    int n; cin>>n;
    int x; cin>>x;
    int even[n];
    for(int i = 0; i<n; i++){
        cin>>even[i];
    }
   facc(even, n, x);
   return 0;
}
