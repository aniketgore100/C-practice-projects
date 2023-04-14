
#include <bits/stdc++.h>

using namespace std;

void rev(int a[], int l, int r){
    if(l>=r)
      return;
    swap(a[l], a[r]);
    rev(a, l+1, r-1);
}
 void print(int a[], int n){
     for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }




int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rev(a, 0 , n-1);
    print(a, n);
    return 0;
}
