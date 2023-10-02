#include <iostream>
using namespace std;
void main() {
	int sum[15], N;
	float root[15];
	for (int i = 0; i < 15; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
		root[i] = sqrt((float)N);

	}
	sum[10] = 2;
	root[7] = 0.1;
	for (int i = 0; i < 15; i++) {

		cout << sum[i] << " " << root[i] << endl;
	}
}