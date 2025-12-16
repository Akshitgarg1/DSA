#include<bits/stdc++.h>
#define d 256
using namespace std;
void search(char pat[], char txt[] , int q){
    int i,j,p=0,t=0,h=1;
    int m=strlen(pat);
    int n=strlen(txt);
    for(int i=0;i<m-1;i++) h=(h*d)%q;
    for(int i=0;i<m;i++){
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }
    for(int i=0;i<=n-m;i++){
        if(p==t){
            for(j=0;j<m;j++){
                if(txt[i+j] != pat[j]) break;
            }
            if(j==m){
                cout<<"pattern at"<<i<<endl;
            }
        }
        if(i<n-m){
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if(t<0)t=(t+q);
        }
    }
}
int main(){
    char txt[]="AKSHITGARG";
    char pat[]="SHIT";
    int q=INT_MAX;
    search(pat,txt,q);
    return 0;
}