#include<iostream>
using namespace std;
void largestE(int arr[], int n){
    // bruete tc => O(NLogN) && sc => O(1)
    sort(arr,arr+n);
    cout<<arr[n-1];
}
int largestElement(int arr[], int n){
    // optimal tc => O(n)
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    // largest element 
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter Array Size: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array Values: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        largestE(arr,n);
        cout<<"\n";

    }
    return 0;
}