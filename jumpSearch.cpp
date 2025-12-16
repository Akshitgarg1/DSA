#include<iostream>
#include<cmath>
using namespace std;
bool linearSearch(int arr[],int l,int r,int key,int &comp)
{
    for(int i=l;i<=r;i++){
        comp++;
        if(arr[i]==key) return true;
    }
    return false;
}
bool jumpSearch(int arr[],int n,int key,int &comp)
{
    int jump=sqrt(n);
    int prev=0;
    while(arr[min(jump,n)-1]<key){
        prev=jump;
        jump+=sqrt(n);
        if(prev>=n) return false;
    }
    return linearSearch(arr,prev,min(jump,n)-1,key,comp);
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
        bool found=jumpSearch(arr,n,key,comp);
        if(found) cout<<"present";
        else cout<<"not present";
    cout<<"comp:"<<comp<<endl;

    }
    return 0;
}