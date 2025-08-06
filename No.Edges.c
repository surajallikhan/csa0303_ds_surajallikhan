#include <stdio.h>

#define MAX_NODES 4

int graph[MAX_NODES][MAX_NODES] = {
    {0, 1, 1, 0},
    {1, 0, 1, 1},
    {1, 1, 0, 1},
    {0, 1, 1, 0}
};

int main() {
    int numNodes = 4;
    int minEdges = 0;

    for (int i = 0; i < numNodes; i++) {
        for (int j = i + 1; j < numNodes; j++) {
            if (graph[i][j] == 1) {
                minEdges++;
            }
        }
    }

    printf("Minimum number of edges: %d\n", minEdges);
    
    return 0;
}
