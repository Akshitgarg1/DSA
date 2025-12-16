#include<iostream>
#include<string>
using namespace std;
void search(string &txt, string &pat){
    int m=pat.size();
    int n=txt.size();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j] != pat[j]) break;
        }
        if(j==m)
        {
            cout<<"pat at"<<" "<<i<<endl;
        }
    }
}
int main(){
    string txt="AKSHIT";
    string pat="IT";
    search(txt,pat);

    return 0;
}