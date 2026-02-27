#include<iostream>
#include<queue>
using namespace std;
int main(){
    // queue (FIFO => FIRST IN FIRST OUT)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    // front() && back()
    cout<<q.front()<<"\n";
    cout<<q.back()<<"\n";

    // size
    cout<<q.size()<<"\n";

    // swap
    queue<int>q1;
    q1.swap(q);

    // pop
    q.pop();


    // empty
    cout<<q.empty()<<"\n";

    return 0;

}