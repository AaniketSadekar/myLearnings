#include<iostream>
using namespace std;
void printNameToN(int i, int n){
    if(i>n) return;
    cout<<"coder ";
    printNameToN(i+1,n);
}
int main(){
    // print Name to N
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        printNameToN(1,n);
        cout<<"\n";

    }
    return 0;
}