#include<iostream>
using namespace std;
int* leftRotateBy1(int arr[], int n){
    // tc O(N) && O(1)
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}
int main(){
    // left rotated by 1
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
        cout<<leftRotateBy1(arr,n)<<"\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}