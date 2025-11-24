#include <iostream>
using namespace std;
void fixNeg(int* arr, int size) {
    for (int* p = arr; p < arr + size; ++p)
        if (*p < 0) *p = 0;
}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(a + i);
    fixNeg(a, n);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << *(a + i);
    }
    cout << '\n';
    delete[] a;
    return 0;
}
