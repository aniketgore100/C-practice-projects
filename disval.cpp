#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    set<int>s;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }

   cout<<s.size();
}

int main(){
   
   solve(); 
}