#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 5 // Number of vertices

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], bool visited[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (!visited[v] && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// Function to print the shortest path from source to target
void printPath(int parent[], int target) {
    if (parent[target] == -1)
        return;

    printPath(parent, parent[target]);
    printf(" -> %d", target);
}

// Function to perform Dijkstra's algorithm for shortest paths
void dijkstra(int graph[V][V], int source, int target) {
    int dist[V];     // Array to store the shortest distance from source to vertices
    bool visited[V]; // Array to keep track of visited vertices
    int parent[V];   // Array to store the parent vertex in the shortest path

    // Initialize dist[], visited[], and parent[]
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[source] = 0; // Distance from source to itself is 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = true;

        // Update dist[] value of adjacent vertices of the selected vertex
        for (int v = 0; v < V; v++)
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
    }

    // Print the shortest path and distance
    printf("Shortest path from %d to %d:", source, target);
    printPath(parent, target);
    printf(" with distance %d\n", dist[target]);
}

int main() {
    int graph[V][V] = {
        {0, 4, 0, 0, 0},
        {4, 0, 8, 0, 0},
        {0, 8, 0, 7, 0},
        {0, 0, 7, 0, 9},
        {0, 0, 0, 9, 0}
    };

    int source = 0;
    int target = 4;

    dijkstra(graph, source, target);

    return 0;
}
