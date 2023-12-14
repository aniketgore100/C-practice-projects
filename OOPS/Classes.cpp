#include <bits/stdc++.h>
using namespace std;

class Class{
    private:
    string name;
    int age;
    int DOB;

    public:

    Class(string Name="", int Age=0, int Dob=0): name(Name), age(Age), DOB(Dob) {};

    string GetName(){
        return name;
    }

    int GetAge(){
        return age;
    }

    int GetDob(){
        return DOB;
    }

};

int main(){
   
    int n; 
    cin>>n;

   

    Class obj[n];

    for(int i=0; i<n; i++){
         string name;
         int age, dob;
         cout<<"enter for : "<< i + 1<<endl;
        cin>>name>>age>>dob;
        obj[i] = Class(name, age, dob);
    }

    for(int i=0; i<n; i++){
       cout<<obj[i].GetName()<<endl;
       cout<<obj[i].GetAge()<<endl;
       cout<<obj[i].GetDob()<<endl;
    }
    return 0;
}