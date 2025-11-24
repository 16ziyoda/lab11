#include <iostream>
using namespace std;
void avg(const double* arr, int size, double* result) {
    double s = 0.0;
    const double* p = arr;
    for (int i = 0; i < size; ++i, ++p) s += *p;
    *result = (size ? s / size : 0.0);
}
int main() {
    int n;
    cin >> n;
    double* a = new double[n];
    for (int i = 0; i < n; ++i) cin >> *(a + i);
    double ans;
    avg(a, n, &ans);
    cout << ans << '\n';
    delete[] a;
    return 0;
}
