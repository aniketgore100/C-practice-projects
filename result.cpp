#include <bits/stdc++.h>
using namespace std;

int main(){
    float marks;
    cin>>marks;
    if(marks >= 60 ) 
      cout<<"first class"<<endl;
    else if( marks >= 50 && marks < 60) 
      cout<<"second class"<<endl;
    else if(marks >= 40 && marks<50) 
      cout<<"pass class"<<endl;
    else 
      cout<<"failed"<<endl;
}