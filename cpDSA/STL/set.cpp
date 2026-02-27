#include<iostream>
#include<set>
using namespace std;
int main(){
    // set  => unique & sorted
    set<int> s;
    
    // insert
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<"\n";

    // count
    cout<<s.count(1)<<"\n";

    // erase
    s.erase(5);

    // find
    s.find(1);

    // size
    cout<<s.size()<<"\n";

    // empty
    cout<<s.empty()<<"\n";

    // lower_bound => minimum value you enter or value not present just after next value print
    cout<<*(s.lower_bound(4))<<"\n";

    // upper_bound => value greater value
    cout<<*(s.upper_bound(3))<<"\n";


    return 0;

}