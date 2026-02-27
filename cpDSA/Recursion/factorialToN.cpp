#include<iostream>
using namespace std;
int factorialToN(int n){
    if(n == 0) return 1;
    return n * factorialToN(n-1);
}
int main(){
    // Factorial To N
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        cout<<n<<" Factorial is: "<<factorialToN(n)<<"\n";
    }
    return 0;
}