#include <iostream>
using namespace std;
bool identical(const int* a, int** bptr, int size) {
    const int* pa = a;
    int* pb = *bptr;
    for (int i = 0; i < size; ++i, ++pa, ++pb)
        if (*pa != *pb) return false;
    return true;
}
int main() {
    int n;
    cin >> n;
    int* A = new int[n];
    int* B = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(A + i);
    for (int i = 0; i < n; ++i) cin >> *(B + i);
    cout << (identical(A, &B, n) ? 1 : 0) << '\n';
    delete[] A;
    delete[] B;
    return 0;
}
