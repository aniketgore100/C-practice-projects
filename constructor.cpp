#include <bits/stdc++.h>
                               // constructor is a special member function with same name of the class 
                               // it is used to initialize the objects of its class  
using namespace std;

// class com{
//     public:
//      com(){
//          cout<<"hello world";              // default constructor 
//      }
// };

class personalInfo{
    public:
     string name, surname, college, stream;
     int age;
     personalInfo(string x, string y, string z, string a, int n){
         name = x;
         surname = y;
         college = z;
         stream = a;
         age  = n;
     }
};


int main(){
    string name, surname, college, stream;
    int n; cin>>n;
    int age;
    string ans = "";
    for(int i=0; i<n; i++){
       cin>>name>>surname>>college>>stream;
       cin>>age;
    personalInfo obj(name, surname, college, stream, age);
    cout<<obj.name<<" "<<obj.surname<<" "<<obj.college<<obj.stream<<obj.age<<endl;
    }
    return 0;
} 