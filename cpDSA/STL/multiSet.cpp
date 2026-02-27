#include<iostream>
#include<set>
using namespace std;
int main(){
    // multiset  => duplicate & sorted
    multiset<int> ms;
    
    // insert
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for(auto i:ms){
        cout<<i<<" ";
    }
    cout<<"\n";

    // count
    cout<<ms.count(1)<<"\n";

    // erase
    ms.erase(5);

    // find
    ms.find(1);

    // size
    cout<<ms.size()<<"\n";

    // empty
    cout<<ms.empty()<<"\n";

    // lower_bound => minimum value you enter or value not present just after next value print
    cout<<*(ms.lower_bound(4))<<"\n";

    // upper_bound => value greater value
    cout<<*(ms.upper_bound(3))<<"\n";


    return 0;

}