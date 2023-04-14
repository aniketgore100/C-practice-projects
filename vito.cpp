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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

     int t;
     cin>>t;

    while(t--){

                  int r,i;
                  cin>>r;
                  int relative[r];

                  for(i = 0; i < r; i++){
                       cin>>relative[i];
                  }
                  sort(relative, relative + r);
                  int ind = relative[ r / 2 ], sum = 0;

                  for(i=0;i<r;i++){

                 sum += abs(relative[i] - ind);
                  }
                 cout<<sum<<"\n";
    }

    return 0;
}


