#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int ans = 1;
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<ans<<" ";
            ans = ans * (i-k) / (k+1);
        }
        cout<<endl;

return 0;
    }
}