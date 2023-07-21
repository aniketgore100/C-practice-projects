#include <iostream>
using namespace std;



int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    int x;
    int a = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    for(int i=n-1; i>0; i--){
        if(arr[i]==x){
            cout<<i;
            a += 1;
            break;
        }
    }
    if(a!=1){
        cout<<-1;
    }
    return 0;
}