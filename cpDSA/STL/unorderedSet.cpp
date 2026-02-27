#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    // unordered_set  => unique & unsorted
    unordered_set<int> us;
    
    // insert
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    for(auto i:us){
        cout<<i<<" ";
    }
    cout<<"\n";

    // count
    cout<<us.count(1)<<"\n";

    // erase
    us.erase(5);

    // find
    us.find(1);

    // size
    cout<<us.size()<<"\n";

    // empty
    cout<<us.empty()<<"\n";



    return 0;

}