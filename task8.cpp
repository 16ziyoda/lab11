#include <iostream>
using namespace std;
void reverseArr(int** arr, int size) {
    int* L = *arr;
    int* R = *arr + size - 1;
    while (L < R) {
        int t = *L; *L = *R; *R = t;
        ++L; --R;
    }
}
int main() {
    int n; 
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(a + i);
    reverseArr(&a, n);
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << *(a + i);
    }
    cout << '\n';
    return 0;
}
