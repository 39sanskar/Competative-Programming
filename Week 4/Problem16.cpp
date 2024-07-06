// E. 3D nodels
// time limit per test0.25 s.
// memory limit per test256 MB
// inputstandard input
// outputstandard output
// Priyansh is a new intern at Mixed Dimensions, and he's learning the basics about 3D models. Hasan gave him an easy task on his first day, he has to count the number of boundary edges in a 3D mesh.

// A boundary edge in a 3D mesh is an edge that is a part of only one triangle. Priyansh got so confused, and asked Hasan to simplify the problem. Hasan decided to give him only two triangles. But he still can’t figure it out. Given the names of the vertices that make up the two triangles, can you help Priyansh find the number of boundary edges in the two triangles?

// Input
// The input consists of two lines, each line describes one triangle, and contains 3 distinct integers from 1 to 6 which represent the names of the vertices of each triangle. It is guaranteed that the two triangles are different by at least one vertex.

// Output
// Print one integer, the number of boundary edges in the two given triangles.

// Examples
// inputCopy
// 3 5 2
// 3 1 2
// outputCopy
// 4
// inputCopy
// 6 1 4
// 5 2 3
// outputCopy
// 6
// Note
// The first sample results in the following 2 triangles with 4 boundary edges (in green):
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int v1, v2, v3, v4, v5, v6;
    cin >> v1 >> v2 >> v3;
    cin >> v4 >> v5 >> v6;

    // Sorting vertices to ensure consistent edge representation
    vector<pair<int, int>> edges = {
        {min(v1, v2), max(v1, v2)},
        {min(v2, v3), max(v2, v3)},
        {min(v3, v1), max(v3, v1)},
        {min(v4, v5), max(v4, v5)},
        {min(v5, v6), max(v5, v6)},
        {min(v6, v4), max(v6, v4)}
    };

    // Map to count occurrences of each edge
    map<pair<int, int>, int> edge_count;

    // Count occurrences of each edge
    for (auto edge : edges) {
        edge_count[edge]++;
    }

    // Count boundary edges (edges that appear exactly once)
    int boundary_edges = 0;
    for (auto it : edge_count) {
        if (it.second == 1) {
            boundary_edges++;
        }
    }

    cout << boundary_edges << endl;

    return 0;
}
