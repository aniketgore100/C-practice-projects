#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<double>arr;
    double a;
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }
    if(arr.size() == 2){
        cout<<fixed<<arr[0]+arr[1]<<endl;
    }
    else{
        sort(arr.begin(), arr.end());
        double mean_of_A = 0.0;
        double mean_of_B = arr[n-1];
        for(int i=0; i<n-1; i++){
            mean_of_A += arr[i];
        }
        mean_of_A = mean_of_A / (n-1);
        cout<<fixed<<mean_of_A+mean_of_B<<endl;
    }
     
}



int main(){
    int t;
    cin>>t;
    while(t--){
      solve();
        
    }
   return 0;
}