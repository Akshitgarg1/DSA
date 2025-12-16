#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key,int &comp)
{
    for(int i=0;i<n;i++)
    {
        comp++;
        if(arr[i]==key)
        {
            return true;
        }
    }
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int comp=0;
        bool found=linearSearch(arr,n,key,comp);
        if(found) cout<<"presesnt";
        else cout<<"not present";
        cout<<comp<<endl;
    }

}