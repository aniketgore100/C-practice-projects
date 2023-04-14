
#include <bits/stdc++.h>

using namespace std;

class myclass{
    public:
    int sum(int arr[], int n){
     int ans  = INT_MIN;
     int sum = INT_MIN;
     for(int i=0; i<n; i++){
         sum=0;
         for(int j=1; j<n; j++){
             sum += arr[j];
             if(sum>ans){
                 ans = sum;
             }
         }
     }
     return ans;
}
};


int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    myclass ans;
    cout << ans.sum(arr, n) << endl;
    return 0;
}

