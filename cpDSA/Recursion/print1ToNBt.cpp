#include<iostream>
using namespace std;
void print1ToNBt(int i, int n){
    if(i<1) return;
    print1ToNBt(i-1,n);
    cout<<i<<" ";
}
int main(){
    // print 1 To N Back Tracking
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        print1ToNBt(n,n);
        cout<<"\n";

    }
    return 0;
}