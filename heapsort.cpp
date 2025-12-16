#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int large=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[large])
    large=l;
    if(r<n && arr[r]>arr[large])
    large=r;
    if(large!=i)
    {
        swap(arr[i],arr[large]);
        heapify(arr,n,large);
    }
}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" "<<endl;
}
int main()
{
    int arr[]={ 1,6,4,8,3,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    print(arr,n);
    return 0;
}