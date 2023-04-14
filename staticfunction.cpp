#include <bits/stdc++.h>
using namespace std;

class employee{
    int id;
    static int count;
public:
     void sedata(void){
         cout<<"Enter the id "<<endl;;
         cin>>id;
         count++;
     }
     void getdata(void){
         cout<<"id is "<<id<<endl;
         cout<<"total employee is " << count<<endl;
     }

     static void getcount(void){
         cout<<"count is"<<count<<endl;
     }

};
int employee::count;                    // we define values here ;

int main(){
    employee obj, obj2, obj3;
    obj.sedata();
    obj.getdata();
    employee::getcount();

    obj2.sedata();
    obj2.getdata();
    employee::getcount();

    obj3.sedata();
    obj3.getdata();
     employee::getcount();
}