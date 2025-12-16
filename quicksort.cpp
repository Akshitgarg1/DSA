#include<iostream>
using namespace std;

int partition(int arr[],int l,int r)
{
    int pivot=arr[l];
    int k=r;
    for(int i=r;i>l;i--)
    {
        if(arr[i]>pivot)
        {
            swap(arr[i],arr[k]);
            k--;
        }
    }
    swap(arr[k],arr[l]);
    return k;
}
void quickSort(int arr[],int l,int r)
{
    int idx;
    if(l<r)
    {
        idx=partition(arr,l,r);
        quickSort(arr,l,idx-1);
        quickSort(arr,idx+1,r);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<< arr[i]<<" "<<endl;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int arr[]={8,6,2,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    print(arr,n);
    return 0;
}