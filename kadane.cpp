#include<bits/stdc++.h>
using namespace std;
int mxSubarraySum(vector<int>&arr){
    int mx=INT_MIN;
    int curr=0;
    for(int x:arr){
        curr+=x;
        if(curr>mx)mx=curr;
        if(curr<0)curr=0;
    }
    return mx;
}
int main(){
vector<int>arr={-1,-2,3,5,4};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<mxSubarraySum(arr);
}