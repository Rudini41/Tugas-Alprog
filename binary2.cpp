#include <iostream>
using namespace std;

int main () {
	int L[8], x, k, j, i;

	for (int l = 1 ; i <= 8; i++) {
		L [l] = l;
	}

	cin >> x;

	i= 1;
	j= 8;

	while (i <= j) {
	k = (i + j) / 2;
	if (x == k) {
		cout << "data ditemukan" << endl;
		break;
	} else if (x > k) {
			i = k+1;

		}else if (x < k) {
			j = k-1;

		}
	}
	if (x<1 || x>8) {
		cout << "data tidak ada" << endl;
	}
	return 0;
}