#include <bits/stdc++.h>
using namespace std;

int G[100][100], visted[100], n;

void DFS(int i) {
    cout << endl
         << i;
    visted[i] = 1;
    for (int j = 0; j < n; j++) {
        if (!visted[j] && G[i][j] == 1) DFS(j);
    }
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix of the graph:" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> G[i][j];

    for (int i = 0; i < n; i++) visted[i] = 0;

    DFS(0);

    return 0;
}
