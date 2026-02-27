#include<iostream>
using namespace std;
bool checkSorted(int arr[], int n){
    // tc => O(n)
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    // check array sorted
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter Array Size: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array values: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<checkSorted(arr,n)<<"\n";

    }
    return 0;
}