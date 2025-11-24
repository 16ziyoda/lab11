#include <iostream>
using namespace std;
int removeValue(int* arr, int size, int val) {
    int* w = arr;                 
    for (int* r = arr; r < arr + size; ++r)  
        if (*r != val) *w++ = *r;
    return int(w - arr);        
}
int main() {
    int n; 
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i) cin >> *(a + i);
    int v; 
    cin >> v;
    int k = removeValue(a, n, v);
    for (int i = 0; i < k; ++i) {
        if (i) cout << ' ';
        cout << *(a + i);
    }
    cout << '\n';
    delete[] a;
    return 0;
}
