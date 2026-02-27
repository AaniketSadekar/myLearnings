#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue 
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(5);

    // top
    cout<<pq.top()<<"\n";

    // size
    cout<<pq.size()<<"\n";

    // pop
    pq.pop();

    // empty();
    cout<<pq.empty()<<"\n";

    // swap 
    priority_queue<int> pq1;
    pq1.swap(pq);

    // minimum heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);
    pq2.emplace(5);

    cout<<pq2.top()<<"\n";


    return 0;

}