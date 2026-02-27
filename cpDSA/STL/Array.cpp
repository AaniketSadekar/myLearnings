#include<iostream>
using namespace std;
int main(){
    // Array
    int bArr[3] = {1,2,3};

    array<int,4> arr = {1,2,3,4};

    // size
    cout<<arr.size()<<"\n";

    // .at
    cout<<arr.at(2)<<"\n";

    // empty
    cout<<arr.empty()<<"\n";

    // front(), back()
    cout<<arr.front()<<"\n";
    cout<<arr.back()<<"\n";






    return 0;
}