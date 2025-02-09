#include <stdio.h>
#include <limits.h>

#define MAX_NODES 100

int findCheapestPrice(int n, int **flights, int flightsSize, int *flightsColSize, int src, int dst, int k) {
    int dist[MAX_NODES];

    // Inicializa todas as distâncias como infinito
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
    }
    dist[src] = 0;

    // Algoritmo de Bellman-Ford
    for (int i = 0; i <= k; i++) {
        int temp[MAX_NODES];
        for (int j = 0; j < n; j++) {
            temp[j] = dist[j];
        }
        
        // Relaxação das arestas (flights)
        for (int j = 0; j < flightsSize; j++) {
            int u = flights[j][0];
            int v = flights[j][1];
            int w = flights[j][2];

            if (dist[u] != INT_MAX && dist[u] + w < temp[v]) {
                temp[v] = dist[u] + w;
            }
        }
        
        // Atualiza as distâncias
        for (int j = 0; j < n; j++) {
            dist[j] = temp[j];
        }
    }

    return dist[dst] == INT_MAX ? -1 : dist[dst];
}
