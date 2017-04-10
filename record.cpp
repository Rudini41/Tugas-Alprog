#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;
int main () {
		tanggal A;
		cin >> A.hari;
		cin >> A.bulan;
		cin >> A.tahun;
		cout << A.hari << endl;
		cout << A.bulan << endl;
		cout << A.tahun << endl;
		return 0;
	}