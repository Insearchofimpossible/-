#include <iostream>;
#include <stdio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	int const n = 10, p = 3, q = 10;
	int a[n], temp;
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		if ((i + 1 >= p ) && (n - i <= q)){
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

