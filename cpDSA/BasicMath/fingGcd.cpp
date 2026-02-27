#include<iostream>
using namespace std;
void findgcd(int n1,int n2){
    for(int i=min(n1,n2);i>=0;i++){
        if(n1%i==0 && n2%i==0){
            cout<<i<<"\n";
            break;
        }
    }
}
int main(){
    // find gcd
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n1,n2;
        cout<<"Enter 2 Number: ";
        cin>>n1>>n2;
        findgcd(n1,n2);

    }
    return 0;
}