#include <iostream>
using namespace std;
int main() {
    const int n = 10;  int A[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) { A[i][j] = 1; }
            else if (i < j) { A[i][j] = 0; }
            else { A[i][j] = i - j + 1; }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { cout << A[i][j] << " "; }cout << endl;}
    return 0;
}