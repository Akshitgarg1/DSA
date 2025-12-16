#include<iostream>
using namespace std;
int leftmost(int arr[],int n,int key)
{
    int m;
    int l=0,r=n-1,leftmost=-1;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(arr[m]==key){
             leftmost=m;
             r=m-1;
        }
        else if(arr[m]<key) l=m+1;
        else r=m-1;
        
    }
    return leftmost;
}
int rightmost(int arr[],int n,int key)
{
    int m;
    int l=0,r=n-1,rightmost=-1;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(arr[m]==key){
            rightmost=m;
             l=m+1;
        }
        else if(arr[m]<key) l=m+1;
        else r=m-1;
        
    }
    return rightmost;

}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int key;
        cin>>key;
        int lidx=leftmost(arr,n,key);
        if(lidx==-1)
        {
             cout<<key<<"not found"<<endl;
              continue;
        }
        int ridx=rightmost(arr,n,key);
        int count=ridx-lidx+1;
        cout<<key<<"-"<<count<<endl;
        
    }
    return 0;
}