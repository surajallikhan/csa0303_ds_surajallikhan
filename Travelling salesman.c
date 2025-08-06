#include <stdio.h>
#include <limits.h>

#define V 4 // Number of cities

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to solve the Traveling Salesman Problem using dynamic programming
int tsp(int graph[][V], int mask, int pos, int n, int dp[][V]) {
    if (mask == (1 << n) - 1) {
        return graph[pos][0]; // Return to the starting city
    }

    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    int ans = INT_MAX;
    for (int city = 0; city < n; city++) {
        if ((mask & (1 << city)) == 0) { // If the city has not been visited
            int newAns = graph[pos][city] + tsp(graph, mask | (1 << city), city, n, dp);
            ans = min(ans, newAns);
        }
    }

    return dp[mask][pos] = ans;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[1 << V][V];
    for (int i = 0; i < (1 << V); i++) {
        for (int j = 0; j < V; j++) {
            dp[i][j] = -1;
        }
    }

    int startingCity = 0;
    int minCost = tsp(graph, 1 << startingCity, startingCity, V, dp);

    printf("Minimum cost of the TSP: %d\n", minCost);

    return 0;
}
