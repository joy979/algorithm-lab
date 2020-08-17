#include <bits/stdc++.h>
using namespace std;

int temp[100000];
void MergeSort(int a[], int lo, int hi) {
    if (lo == hi) return;
    int mid = (lo + hi) / 2;

    MergeSort(a, lo, mid);
    MergeSort(a, mid + 1, hi);

    for (int i = lo, j = mid + 1, k = lo; k <= hi; k++) {
        if (i == mid + 1)
            temp[k] = a[j++];
        else if (j == hi + 1)
            temp[k] = a[i++];
        else if (a[i] < a[j])
            temp[k] = a[i++];
        else
            temp[k] = a[j++];
    }
    for (int i = lo; i <= hi; i++) a[i] = temp[i];
}

int main() {
    int n, a[10000];

    cout << "Enter Array Size:";
    cin >> n;

    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    MergeSort(a, 0, n - 1);

    cout << "MergeSorted in Ascending order:";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << endl;

    return 0;
}
