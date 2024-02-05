#include <iostream>; #include <stdio.h>; 
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru"); srand(time(NULL));
	const int n = 5, k = 4;
	int side, a[n], temp;
	cout << "¬ какую сторону нужно сдвинуть массив (лево = 0, право = 1): "; cin >> side;
	for (int i = 0; i < n; i++) { a[i] = rand() % 100 + 1;}
	for (int i = 0; i < n; i++) { cout << a[i] << " "; }; cout << endl;
	if (side) {
		for (int i = 1; i <= k; i++) {
			temp = a[n - 1];
			for (int j = n - 2; j >= 0; j--) { a[j + 1] = a[j]; };  a[0] = temp;
		}
	}
	else
		for (int i = 1; i <= n - k; i++) {
			temp = a[n - 1];
			for (int j = n - 2; j >= 0; j--) { a[j + 1] = a[j]; }; a[0] = temp;
		}
	for (int i = 0; i < n; i++) { cout << a[i] << " "; }
}
