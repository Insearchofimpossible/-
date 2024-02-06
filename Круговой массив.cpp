#include <iostream>; #include <stdio.h>; 
using namespace std;
int main() {
    setlocale(LC_ALL, "Ru"); srand(time(NULL));
    const int n = 5, k = 4;
    int a[n], temp;
    for (int i = 0; i < n; i++) { a[i] = rand() % 100 + 1; }
    for (int i = 0; i < n; i++) { cout << a[i] << " "; }; cout << endl;
    for (int i = 1; i <= n - k + 1; i++) { temp = a[n - 1]; }
    for (int j = n - 2; j >= 0; j--) { a[j + 1] = a[j]; }; a[0] = temp;
    for (int i = 0; i < n; i++) { cout << a[i] << " "; }
    for (int i = 1; i < n; i++) {
        int j = i;
        while ((j > 0) && (a[j - 1] > a[j])) {
            int tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;
            j--;
        }
    } cout << endl;
    for (int i = 0; i < n; i++) { cout << a[i] << " "; }; cout << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) cout << a[i] << " ";
    }
}
