/**
 * PROBLEMA 3
 * Algoritmo utilizado: Dinitz
 * Complejidad: 
**/
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int _INT_MAX = 1e9; // Infinito

struct Edge {
    int from, to, capacity, flow;
};

class Dinitz {
  private:
    int n; // Número de nodos
    vector<Edge> edges;
    vector<vector<int>> adj;
    vector<int> dist, ptr;

    bool bfs(int source, int sink) {
      dist.assign(n, -1);
      queue<int> q;
      q.push(source);
      dist[source] = 0;

      while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int id : adj[u]) {
          int v = edges[id].to;
          if (dist[v] == -1 && edges[id].flow < edges[id].capacity) {
              q.push(v);
              dist[v] = dist[u] + 1;
            }
        }
      }
      return dist[sink] != -1;
    }

    int dfs(int u, int flow, int sink) {
      if (u == sink || flow == 0)
        return flow;
      for (int &i = ptr[u]; i < adj[u].size(); i++) {
        int id = adj[u][i];
        int v = edges[id].to;
        if (dist[v] == dist[u] + 1 && edges[id].flow < edges[id].capacity){
          int pushed = dfs(v, min(flow, edges[id].capacity - edges[id].flow), sink);
          if (pushed > 0) {
            edges[id].flow += pushed;
            edges[id ^ 1].flow -= pushed;
            return pushed;
          }
        }
      }
      return 0;
    }

  public:
    Dinitz(int nodes) {
      n = nodes;
      adj.resize(n);
      dist.resize(n);
      ptr.resize(n);
    }

    void add_edge(int from, int to, int capacity) {
      edges.push_back({from, to, capacity, 0});
      edges.push_back({to, from, 0, 0});
      adj[from].push_back(edges.size() - 2);
      adj[to].push_back(edges.size() - 1);
    }

    void max_flow(int source, int sink) {
      if (source == sink){
        cout << -1 << endl;
      }else{
        int flow = 0;
        while (bfs(source, sink)) {
          ptr.assign(n, 0);
          while (int pushed = dfs(source, _INT_MAX, sink))
              flow += pushed;
        }
        cout << "Maximum flow from " << source << " to " << sink << " is: " << flow << endl;
      }
    }
};