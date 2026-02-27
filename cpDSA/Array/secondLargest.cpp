#include<iostream>
using namespace std;
void sLargest(int arr[], int n){
    // bruete tc => O(NLogN) + O(n)
    sort(arr,arr+n);
    int largest = arr[n-1];
    int sLargest;
    for(int i=n-2;i>=0;i--){
        if(arr[i] != largest){
            sLargest = arr[i];
            break;
        }
    }
    cout<<sLargest<<"\n";
}
int secLargest(int arr[], int n){
    // better tc = O(2N)
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int secLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > secLargest && arr[i] != largest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}
int secondLargest(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int main(){
    // second largest 
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter Array Size:  ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array values: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // sLargest(arr,n);
        // cout<<"Second Largest: "<<secLargest(arr,n)<<"\n";
        cout<<"Second Largest: "<<secondLargest(arr,n)<<"\n";
    }
    return 0;
}