#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<vector<int> >& adj, int src, vector<bool>& vis) {
    queue<int> q;
    vis[src] = true;
    q.push(src);
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int i : adj[curr]) {
            if(!vis[i]) {
                vis[i] = true;
                q.push(i);
            }
        }
    }
}

void addEdge(vector<vector<int> >& adj, int u, int v) {
    adj[u].push_back(v);
}

int main() {
    int V = 5;
    vector<vector<int> > adj(V);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    vector<bool> vis(V, false);
    cout << "BFS is: ";
    bfs(adj, 0, vis);
    return 0;
}
