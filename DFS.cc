#include <iostream>
using namespace std;

const int MAX = 100;
bool dfs(int graph[MAX][MAX], int numV, int src, int dest, bool visited[]) {
    visited[src] = true;
    if (src == dest) return true;
    for (int i = 0; i < numV; ++i) {
        if (graph[src][i] == 1 && !visited[i]) {
            if (dfs(graph, numV, i, dest, visited)) return true;
        }
    }
    return false;
}
bool isPathExists(int graph[MAX][MAX], int numV, int src, int dest){
    bool visited[MAX] = {false};
    return dfs(graph, numV, src, dest, visited);
}

int main() {
    int numV; cin >> numV;
    int graph[MAX][MAX];
    for (int i = 0; i < numV; ++i) {
        for (int j = 0; j < numV; ++j) cin >> graph[i][j];
        }
    int src, dest; cin >> src >> dest;
    if (isPathExists(graph, numV, src, dest)) cout << "Yes Path Exists\n";
    else cout << "No Such Path Exists\n";
    return 0;
}