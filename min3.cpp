// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a, b,c;
//     cin>>a>>b>>c;
//     if(a==b && b==c && a==c){
//         cout<<"all arr same"<<endl;
//     }
//     else if(a > b && a > c){
//         cout<<" c is less"<<endl;
//     }
//     else if(b > a && b > c){
//         cout<<"b is less "<<endl;
//     }
//     else {
//         cout<<"a is less"<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<< i << " ";
    }
    cout<<endl;
    for(int i = n; i>=1; i--){
        cout<< i << " ";
    }
    cout<<endl;
    // int l, r;
    // cin>>l>>r;
    // if(l < r){
    //  for(int i=l; i<=r; i++){
    //     cout<<i<<" ";
    // }
    // }
    // else{
    //     for(int i=l; i>=r; i--){
    //         cout<<i<<" ";
    //     }
    // }
    cout<<endl;
    for(int i=1, j=9; i<=9 && j>=1; i++, j--){
        cout<< i + j<<" ";
    }
    cout<<endl;
    for(int i=1; i<=10; i++){
        cout<< n * i<<" ";
    }
}