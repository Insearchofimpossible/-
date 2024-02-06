#include <iostream>;
using namespace std;
int main() {
	const int n = 15; int a[n][n], x = n / 2, y = n / 2;
	for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { a[i][j] = 0; } }; a[0][n / 2] = 1;
	for (int i = 1; i < n; i++) {
		if (i <= n / 2) { x--; y++; }
		else { x++; y--; }; a[i][y] = a[i][x] = 1;
	}
	for (int i = 0; i < n; i++) { for (int j = 0; j < n; j++) { cout << a[i][j] << " "; } cout << endl; }
}
