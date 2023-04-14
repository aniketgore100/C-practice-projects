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
    
    int arr[6][6];
    int r, c;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                r = abs(3-i);
                c = abs(3-j);
                cout<<r+c<<endl;
            }
        }
    }
   return 0;
}
