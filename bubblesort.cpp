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

void bubble(int *arr, int n){
    bool swapped = false;
    for(int i = 1; i<n; i++){
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }
    if(swapped == false)
      break;
}
     cout<<swapped<<endl;
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
    bubble(arr, n);
    loop(i, n){
        cout<<arr[i]<<" ";
    }
   return 0;
}
