#include<bits/stdc++.h>
using namespace std;
int mxwater(vector<int>&h){
    int l=0;
    int mx=0;
    int r=h.size()-1;
    while(l<r){
        mx=max(mx,(r-l)*min(h[l],h[r]));
        if(h[l]<h[r])l++;
        else r--;

    }
    return mx;
}
int main(){
    vector<int>h={1,8,6,2,5,4,8,3,7};
    int n=sizeof(h)/sizeof(h[0]);
    cout<<mxwater(h);
}