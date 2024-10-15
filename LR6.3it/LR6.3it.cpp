#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
void PositiveSum(T*& b, int k, T &sum) {
	for (int i = 0; i <= k; i++) {
		if (b[i] > 0)
			sum += b[i];
	}
}
template <typename T>
void createArr(T*& b, int k) {
	for (int i = 0; i <= k; i++) {
		b[i] = i-10;
	}
}
template <typename T>
void Print(T*& b, int k) {
	cout << "arrey: " << endl;
	for (int i = 0; i <= k; i++) {
		cout << " " << b[i];
	}
	cout << endl;
}

int main() {
	int k = 20, sum = 0;
	int* b = new int[k];

	createArr(b, k);
	
	Print(b, k);
	PositiveSum(b, k, sum);
	cout << "sum " << sum;

	delete[] b;
	return 0;
}
