#include <iostream>
using namespace std;
void setToHundred(int** p) {
    **p = 100;
}

int main() {
    int x;
    cin >> x;            // ignored
    int* px = &x;
    setToHundred(&px);
    cout << x << '\n';
    return 0;
}
