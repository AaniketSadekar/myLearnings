#include<iostream>
using namespace std;
int fibonaciiToN(int n){
    if(n<=1) return n;
    int last = fibonaciiToN(n-1);
    int slast = fibonaciiToN(n-2);
    return last + slast;
}
int main(){
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        cout<<fibonaciiToN(n)<<"\n";
    }
    return 0;
}