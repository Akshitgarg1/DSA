#include<iostream>
using namespace std;
    int countdifference(int arr[],int n,int key)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]-arr[j]==key|| arr[j]-arr[i]==key)
                c++;
            }
        }
        return c;

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
        cout<<countdifference(arr,n,key)<<endl;
    }
}