#include<iostream>
using namespace std;
void printNTo1(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    printNTo1(i-1,n);
}
int main(){
    // print N to 1
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        printNTo1(n,n);
        cout<<"\n";

    }
    return 0;
}