#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printIfValid(int* p) {
    if (p) cout << *p;
    else   cout << "null";
}

int main() {
    vector<int> vals;       
    vector<int*> ptrs;    
    string tok;
    while (cin >> tok) {
        if (!tok.empty() && tok.back() == ',') tok.pop_back(); 
        if (tok == "n") ptrs.push_back(nullptr);
        else {
            vals.push_back(stoi(tok));
            ptrs.push_back(&vals.back());
        }
    }

    for (size_t i = 0; i < ptrs.size(); ++i) {
        if (i) cout << ", ";
        printIfValid(ptrs[i]);
    }
    cout << '\n';
    return 0;
}
