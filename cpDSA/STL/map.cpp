#include<iostream>
#include<map>
using namespace std;
int main(){
    // map => unique key && duplicate value && sorted by key
    map<string,int>m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
  
    



    return 0;
}