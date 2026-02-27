#include<iostream>
using namespace std;
void sumOfN(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumOfN(i-1,sum+i);

}
int sumOfN(int n){
    if(n==0) return 0;
    return n + sumOfN(n-1);
}
int main(){
    // sum of N
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        // sumOfN(n,0);
        // cout<<"\n";
        cout<<sumOfN(n)<<"\n";
    }
    return 0;
}