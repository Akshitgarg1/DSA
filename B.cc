#include<iostream>
using namespace std;
int flag;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        
    }
    if(flag==0)cout<<"n0 sorting is done"<<endl;
    else cout<<"\nsorting is done\n";
}
int main()
{
    int arr[]={3,2,5,7,1};
    int n=5;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}