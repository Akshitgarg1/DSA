#include<bits/stdc++.h>
#define V 9;
using namespace std;
int mini_dis(int dist[],bool set[]){
    int min=INT_MAX,minindex;
    for(int v=0;v<V;v++){
        if(set[v]==false && dist[v]<=min)
        {
            min=dist[v],minindex=v;
        }
    }
}
void printSolution(int dist[])
{
    printf("Vertex \t\t Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t\t\t %d\n", i, dist[i]);
}
void dijk(int graph[V][V],int src){
    int dist[V];
    bool set[V];
    
}
int main(){

}