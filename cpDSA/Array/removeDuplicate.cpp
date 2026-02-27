#include<iostream>
#include<set>
using namespace std;
void removeDup(int arr[], int n){
    // brute tc => O(NLogN) + N && sc O(n)
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int idx = 0;
    for(auto i: st){
        arr[idx] = i;
        idx++;
    }
    cout<<idx<<" ";
}
int removeDuplicate(int arr[], int n){
    // tc => O(N) && sc O(1)
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    // remove duplicate 
    int t;
    cout<<"Enter No of Test Case: ";
    cin>>t;
    for(int x=1;x<=t;x++){
        int n;
        cout<<"Enter a Number: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array Values: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        // removeDup(arr,n);
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }
        cout<<removeDuplicate(arr,n);
        cout<<"\n";
        
    }
    return 0;
}