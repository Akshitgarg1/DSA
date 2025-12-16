#include<iostream>
using namespace std;
#define MX 100
bool dfs(int graph[MX][MX],int V,int src,int dest,bool vis[]){
    vis[src]=true;
    if(src==dest)return true;
    for(int i=0;i<V;i++){
        if(graph[src][i]==1 && !vis[i]){
            if(dfs(graph,V,i,dest,vis))return true;
        }
    }
    return false;
}
bool isPathExist(int graph[MX][MX],int v,int src,int dest){
    bool vis[MX]={false};
    return dfs(graph,V,src,dest,vis);
}
int main()
{
    int graph[][]={
        
    }

}