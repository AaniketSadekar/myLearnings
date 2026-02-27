#include<iostream>
#include<stack>
using namespace std;
int main(){
    // stack(LIFO => LAST IN FIRST OUT);
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    // top
    cout<<st.top()<<"\n";

    // size()
    cout<<st.size()<<"\n";

    // pop
    st.pop();

    // empty()
    cout<<st.empty()<<"\n";

    // swap
    stack<int> st1;
    st1.swap(st);

    return 0;

}