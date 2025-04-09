
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <sstream>
using namespace std;

void problem1() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;
}

void problem2() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        int max_val = matrix[i][0];
        for(int j = 1; j < m; j++) {
            if(matrix[i][j] > max_val) {
                max_val = matrix[i][j];
            }
        }
        cout << max_val << endl;
    }
}

void problem3() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int j = 0; j < m; j++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void problem4() {
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    cout << sum << endl;
}

void problem5() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void problem6() {
    int n, m, c, d;
    cin >> n >> m;
    int A[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    cin >> c >> d;
    if(m != c) {
        cout << "Multiplication not possible!" << endl;
        return;
    }
    int B[c][d];
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < d; j++) {
            cin >> B[i][j];
        }
    }
    int C[n][d] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < d; j++) {
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

void problem7() {
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i = 0; i < n; i++) {
        reverse(matrix[i], matrix[i] + n);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void problem8() {
    string s;
    cin >> s;
    int vowels = 0, consonants = 0;
    for(char c : s) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }
    cout << vowels << " " << consonants << endl;
}

void problem9() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
}

void problem10() {
    string s;
    cin >> s;
    bool isPalindrome = true;
    int left = 0, right = s.length() - 1;
    while(left < right) {
        if(s[left] != s[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    cout << (isPalindrome ? "Yes" : "No") << endl;
}

void problem11() {
    string s;
    cin >> s;
    map<char, int> freq;
    for(char c : s) {
        freq[c]++;
    }
    char mostFrequent = s[0];
    int maxCount = freq[s[0]];
    for(auto pair : freq) {
        if(pair.second > maxCount) {
            mostFrequent = pair.first;
            maxCount = pair.second;
        }
    }
    cout << mostFrequent << endl;
}

void problem12() {
    string s;
    cin >> s;
    unordered_set<char> seen;
    string result;
    for(char c : s) {
        if(seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }
    cout << result << endl;
}

void problem13() {
    string sentence;
    getline(cin >> ws, sentence);
    stringstream ss(sentence);
    string word;
    string longestWord;
    int maxLength = 0;
    while(ss >> word) {
        if(word
