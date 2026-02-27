#include<iostream>
using namespace std;
void printNTo1Bt(int i, int n){
    if(i>n) return;
    printNTo1Bt(i+1,n);
    cout<<i<<" ";
}
int main(){
    // print N To 1 Back Tracking
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        printNTo1Bt(1,n);
        cout<<"\n";
    }
    return 0;
}