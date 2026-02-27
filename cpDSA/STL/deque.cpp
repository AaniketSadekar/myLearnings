#include<iostream>
#include<deque>
using namespace std;
int main(){
    // deque
    deque<int> dq;
    dq.push_back(3);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(1);

    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<"\n";

    // front() && back()
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";

    // pop_back() && pop_front();
    dq.pop_back();
    dq.pop_front();

    for(auto i: dq){
        cout<<i<<" ";
    }
    cout<<"\n";

    // rest of functions same as vector
    return 0;

}