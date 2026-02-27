#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector 
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";

    // front() && back()
    cout<<v.front()<<"\n";
    cout<<v.back()<<"\n";

    // .at
    cout<<v.at(1)<<"\n";

    // vector with pair
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(3,4);

    for(auto i: vp){
        cout<<"("<<i.first<<" "<<i.second<<" )";
    }
    cout<<"\n";

    // Declare size of vector with same value
    vector<int> v1(5,100);
    for(auto i: v1){
        cout<<i<<" ";
    }
    cout<<"\n";

    // Declare size of vector
    vector<int> v2(5);

    // copy vector to another vector
    vector<int>v3(v1);
    for(auto i: v3){
        cout<<i<<" ";
    }
    cout<<"\n";

    // iterator
    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    for(auto it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;

    for(auto i: v){
        cout<<i<<" ";
    }

    cout<<endl;

    // erase
    vector<int> v4 = {1,2,3,4,5};
    v4.erase(v4.begin()+1);
    v4.erase(v4.begin() + 2, v4.begin() + 4);

    for(auto i: v4){
        cout<<i<<" ";
    }
    cout<<"\n";

    // insert
    vector<int> v5(2,100);
    v5.insert(v5.begin(),300);
    v5.insert(v5.begin() + 1,2,10);

    for(auto i: v5){
        cout<<i<<" ";
    }
    cout<<"\n";

    // size
    cout<<v5.size()<<"\n";

    // pop_back()
    v5.pop_back();
    for(auto i: v5){
        cout<<i<<" ";
    }
    cout<<"\n";

    // swap
    vector<int>v6(2,20);
    v5.swap(v6);
    for(auto i: v5){
        cout<<i<<" ";
    }
    cout<<"\n";

    // clear
    v6.clear();

    // empty()
    cout<<v6.empty()<<"\n";
    
    return 0;
}