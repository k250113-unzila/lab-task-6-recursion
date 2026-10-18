#include <iostream>
using namespace std;

const int MAX = 20;
int maze[MAX][MAX];
int n;

// Counts paths from (r, c) to (n-1, n-1), moving only right or down.
int countPaths(int r, int c) {
    // Out of bounds or dead block
    if (r >= n || c >= n || maze[r][c] == 0)
        return 0;

    // Reached destination
    if (r == n - 1 && c == n - 1)
        return 1;

    // Paths going down + paths going right
    return countPaths(r + 1, c) + countPaths(r, c + 1);
}

int main() {
    cout << "Enter N: ";
    cin >> n;

    cout << "Enter the maze (0 = dead, 1 = open):" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];

    cout << "Number of paths: " << countPaths(0, 0) << endl;
    return 0;
}
