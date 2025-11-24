#include <iostream>
using namespace std;
int* findMax(int* arr, int size) {
    if (size <= 0) return nullptr;
    int* best = arr;
    for (int* p = arr + 1; p < arr + size; ++p)
        if (*p > *best) best = p;
    return best;
}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(a + i);
    int* mx = findMax(a, n);
    if (mx) cout << *mx << '\n';
    delete[] a;
    return 0;
}
