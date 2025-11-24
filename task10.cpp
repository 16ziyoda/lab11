#include <iostream>
using namespace std;
void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* pa = a;
    const int* pb = b;
    const int* enda = a + n;
    const int* endb = b + m;
    int* pc = out;
    while (pa < enda && pb < endb) {
        if (*pa <= *pb) *pc++ = *pa++;
        else            *pc++ = *pb++;
    }
    while (pa < enda) *pc++ = *pa++;
    while (pb < endb) *pc++ = *pb++;
}
int main() {
    int n, m;
    cin >> n;
    int* A = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(A + i);
    cin >> m;
    int* B = new int[m];
    for (int i = 0; i < m; ++i) cin >> *(B + i);
    int* C = new int[n + m];
    mergeSorted(A, n, B, m, C);
    for (int i = 0; i < n + m; ++i) {
        if (i) cout << ' ';
        cout << *(C + i);
    }
    cout << '\n';
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
