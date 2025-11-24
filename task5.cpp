#include <iostream>
using namespace std;
int sum2D(int** m, int r, int c) {
    int s = 0;
    for (int** row = m; row < m + r; ++row)
        for (int* p = *row; p < *row + c; ++p)
            s += *p;
    return s;
}
int main() {
    int r, c;
    cin >> r >> c;
    int** a = new int*[r];
    for (int i = 0; i < r; ++i) a[i] = new int[c];
    for (int i
