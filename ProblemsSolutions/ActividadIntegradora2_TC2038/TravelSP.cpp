/**
 * PROBLEMA 2
 * Algoritmo utilizado: Traveling Salesman Problem (tsp)
 * Complejidad: O(n * n!)
**/
#include <bits/stdc++.h>
using namespace std;

void tsp(vector<vector<int>> graph2, int n){
    int s = 0;
    vector<int> vertex;
    for (int i = 0; i < n; i++)
        if (i != s){
            vertex.push_back(i);
        }
    long long min_path = INT_MAX;
    vector<int> result_path;
    vector<int> aux_path;

    do {
        long long current_pathweight = 0;

        int k = s;
        aux_path.push_back(s);

        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph2[k][vertex[i]];

            if(current_pathweight > min_path) {
                break;
            }

            k = vertex[i];
            aux_path.push_back(k);
        }

        aux_path.push_back(s);
        current_pathweight += graph2[k][s];

        if(min_path > current_pathweight)
            result_path = aux_path;

        aux_path.clear();
        min_path = min(min_path, current_pathweight);
    } while (next_permutation ( vertex.begin(), vertex.end() ));

    if (min_path < 0) {
        cout << "There is no possible route." << endl;
    }
    else {
      cout << "Minimum cost: " << min_path << endl;
      cout << "Path: ";
      for(int i = 0; i < result_path.size(); i++)
        cout << result_path[i] << " ";
    }   cout << endl;
}