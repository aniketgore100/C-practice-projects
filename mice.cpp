
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
      int n;
      cin>>n;
      int arr[n];
      int arr2[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
        cin>>arr2[i];
      }
      sort(arr, arr+n);
      sort(arr2, arr2+n);
      int result = 0;
      for(int i=0; i<n; i++){
          result  = max(result, abs(arr[i]-arr2[i]));
      }
      cout<<result<<endl;
   return 0;
}
