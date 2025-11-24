#include <iostream>
#include <vector>
#include <string>
using namespace std;
int countValid(int** arr, int size) {
    int cnt = 0;
    int** p = arr;                
    for (int i = 0; i < size; ++i, ++p)
        if (*p != nullptr) ++cnt;
    return cnt;
}
int main() {
    int n;
    cin >> n;
    vector<int*> a(n, nullptr);
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;       
        if (s != "-") a[i] = new int(stoi(s));
    }
    cout << countValid(a.data(), n) << '\n';
    for (int* p : a) delete p;
    return 0;
}
