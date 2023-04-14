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

void selection(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        int minin = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minin]){
                minin = j;
            }
        }
        swap(arr[minin], arr[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    loop(i, n){
        cin>>arr[i];
    }
    selection(arr, n);
    loop(i, n){
        cout<<arr[i]<<" ";
    }
   return 0;
}
