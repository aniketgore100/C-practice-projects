#include <bits/stdc++.h>
using namespace std;

struct star{
    std::string id;
    double ra;
    double dec;
};




int main(){
    ifstream catalogFile("");
    if(!catalogFile){
        cerr<<"error"<<endl;
        return 1;
    }
    vector<star>stars;
    string line;
    while(getline(catalogFile, line)){
        stringstream ss(line);
        string id;
        double ra, dec;
        getline(ss, id, ',');
        ss>>ra;
        ss.ignore();
        ss>>dec;
        stars.push_back({id, ra, dec});
    }
    cout<<"enter star id";
    string searchid;
    cin>>searchid;
    

    bool found = false ;
    for(const auto& star: stars){
        if(star.id == searchid){
            cout<<"star found"<<endl;
        }
    }
}