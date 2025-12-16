#include<bits/stdc++.h>
using namespace std;
void computelps(char* pat, int m , int* lps);
void kmpsearch(char* pat, char* txt){
    int m=strlen(pat);
    int n=strlen(txt);
    int lps[m];
    computelps(pat,m,lps);
    int i=0,j=0;
    while((n-i)>=(m-j)){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"pattern found at"<<i-j<<endl;
            j=lps[j-1];

        }
        else if(i<n && pat[j] != txt[i])
        {
            if(j !=0) j=lps[j-1];
            else i++;

        }
    }
}
void computelps(char* pat, int m, int*lps){
    int l=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(pat[i]==pat[l]){
            l++;
            lps[i]=l;
            i++;
        }
        else{
            if(l !=0) l=lps[l-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
int main()
{
    char txt[]="AKSHITGARG";
    char pat[]="GA";
    kmpsearch(pat,txt);
    return 0;
}