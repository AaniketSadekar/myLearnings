#include<iostream>
#include<list>
using namespace std;
int main(){
    // List
    list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.emplace_front(1);

    for(auto i: ls){
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<ls.front()<<"\n";
    cout<<ls.back()<<"\n";

    // rest of function same as vector

    return 0;
}