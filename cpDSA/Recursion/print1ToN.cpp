#include<iostream>
using namespace std;
void print1ToN(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    print1ToN(i+1,n);
}
int main(){
    // print 1 to N
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        print1ToN(1,n);
        cout<<"\n";

    }
    return 0;
}