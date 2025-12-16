#include <iostream>
using namespace std;
const int MAX_CHAR=26;
void findmaxoccur(char arr[],int n)
{
    int count[MAX_CHAR]={0};
    for(int i=0;i<MAX_CHAR;i++)
    {
        count[arr[i]-'a']++;
    }
    int maxoccur=0;
    char maxchar='\0';
    bool duplicate=false;
    for(int i=0;i<MAX_CHAR;i++)
    {
        if(count[i]>maxoccur)
        {
            maxoccur=count[i];
            maxchar=i+'a';
            duplicate=true;
        }
        else if(count[i]==maxoccur){
        duplicate= false;
        }
    }
    if(duplicate)
    {
        cout<<"maxchar:"<<maxchar<<"-"<<maxoccur<<endl;
    }
    else
    {
        cout<<"no duplicates";
    }
}

int main() {
    char arr[]={ 'b','c','b','b','d','e'};
    int n=sizeof(arr)/sizeof(arr[0]);
    findmaxoccur(arr,n);
    

    return 0;
}