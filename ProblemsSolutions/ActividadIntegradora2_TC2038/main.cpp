// =========================================================
// Actividad Integradora 2
// Por:
//      Cásar Antonio López Vargas      -  A01424978
//      Diego Emilio Barrera Hernández  -  A01366802

// Fecha: 2/Febrero/2024
// =========================================================
#include "Graph.cpp"
#include "TravelSP.cpp"


int main() {
  int n, data, s, f;
  cin >> n >> s >> f;

  // Grafo problema 1
  Graph g(n, n*n);
  // Grafo problema 2
  vector<vector<int>> graph2;
  // Grafo problema 3
  Dinitz dinitz(n);


  // Llenado del grafo 1 
  for(int i = 0; i < n; i++){
    vector<int> aux;

    for(int j = 0; j < n; j++){
      cin >> data;
      if(data == -1){
        data = _INT_MAX;
      }
      aux.push_back(data);
      g.addEdge(i, j, data);
    }
    graph2.push_back(aux);
  }

  // Llenado del grafo 2 
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> data;
      dinitz.add_edge(i, j, data);
    }
  }
  
  cout << "-------------------------------------" << endl;
  cout << "Problem 1" << endl;
  g.kruskal();
  cout << "-------------------------------------" << endl;
  cout << "Problem 2" << endl;
  tsp(graph2, n);
  cout << "-------------------------------------" << endl;
  cout << "Problem 3" << endl;
  dinitz.max_flow(s, f);
  cout << "-------------------------------------" << endl;
  return 0;
}
