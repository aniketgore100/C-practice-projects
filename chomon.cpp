#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, ans;
        cin>>n>>x;
        int arr[n];
        ans  = n-x;
        map<int, int>mp;
        for(int i=0; i<n; i++){
           cin>>arr[i];
           mp[arr[i]]++;
        }
        int count = mp.size();
        cout<<min(ans, count)<<endl;
        
    }
}