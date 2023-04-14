#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[5];
        for(int i=0; i<5; i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=0; i<5; i++){
            if(arr[i]==1)
               count++;
        }
        if(count==0)
          cout<<"Beginner"<<endl;

          else if (count==1)
          cout<<"Junior Developer"<<endl;

           else if (count==2)
          cout<<"Middle Developer"<<endl;

           else if (count==3)
          cout<<"Senior Developer"<<endl;

           else if (count==4)
          cout<<"Hacker"<<endl;

            else if (count==5)
          cout<<"Jeff Dean"<<endl;
    }
    return 0;
}