#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n,int key,int &comp)
{
    int l=0,m;
    int r=n-1;
    while(l>=r)
    {
        m=l+(r-l)/2;
        comp++;
    }
    if(arr[m]==key) return key;
    else if(arr[m]>key) r=m-1;
    else l=m+1;
return false;
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
        int comp=0;
        bool found=binarySearch(arr,n,key,comp);
        if(found) cout<<"present";
        else cout<<"not present";
        cout<<comp;

    }
    return 0;
}