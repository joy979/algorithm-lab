#include <bits/stdc++.h>
using namespace std;

int n, F[100000005];

int main() {
    F[0] = 0;
    F[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) F[i] = (F[i - 1] + F[i - 2]) % 10;
    cout << F[n] << endl;

    return 0;
}
