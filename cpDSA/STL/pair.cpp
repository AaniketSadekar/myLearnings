#include<iostream>
using namespace std;
int main(){
    // pair
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<"\n";

    // pair under another pair
    pair<int,pair<int,int>> pp = {1,{2,3}};
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<"\n";

    // pair with array
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" ";
    cout<<arr[0].second<<" ";
    cout<<arr[1].first<<" ";
    cout<<arr[1].second<<" ";
    cout<<arr[2].first<<" ";
    cout<<arr[2].second<<" ";


    return 0;
}