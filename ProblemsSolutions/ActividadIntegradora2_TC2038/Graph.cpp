/**
 * PROBLEMA 1
 * Algoritmo utilizado: Kuskal Minimum Spanning Tree
 * Complejidad: O(n log n)
**/
#include <algorithm>
#include "Dinitz.cpp"

// Estructura y construcción y métodos del grafo
struct Graph{
    int V, E;
    vector<pair<int, pair<int, int>>> edges;
    Graph(int V, int E){
        this->V = V;
        this->E = E;
    }
    void addEdge(int u, int v, int w){
        edges.push_back({w, {u, v}});
    }
    void kruskal();
};

// Estructura y construcción y métodos para conjuntos disjuntos
struct DisjointSets{
    int *parent, *rank;
    int n;

    DisjointSets(int n) {
        this->n = n;
        parent = new int[n+1];
        rank = new int[n+1];
        for (int i = 0; i <= n; i++){
            rank[i] = 0;
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u != parent[u]){
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    void merge(int x, int y) {
        x = find(x);
        y = find(y);

        if (rank[x] > rank[y])
            parent[y] = x;
        else
            parent[x] = y;

        if (rank[x] == rank[y])
            rank[y]++;
    }
};

// Impresión del algoritmo Kruskal
void Graph::kruskal(){
    sort(edges.begin(), edges.end());

    DisjointSets ds(V);

    vector<pair<int, pair<int, int>>>::iterator it;

    for (it = edges.begin(); it != edges.end(); it++) {
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);

        if (set_u != set_v){
            cout << "(" << u << ", " << v << ")" << endl;
            ds.merge(set_u, set_v);
        }
    }
}
