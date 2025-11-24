#include <iostream>
using namespace std;
void swapRef(int& a, int& b) { 
    int t = a; a = b; b = t;
}
void swapPtr(int* a, int* b) {      // pass-by-pointer
    int t = *a; *a = *b; *b = t;
}
int main() {
    int x, y;
    cin >> x >> y;
    swapRef(x, y);
    swapPtr(&x, &y);
    cout << x << ' ' << y << '\n';
    return 0;
}
