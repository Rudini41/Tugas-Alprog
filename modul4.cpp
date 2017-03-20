#include <iostream>
using namespace std;
//prototype
int tambahkan (int a, int b);
//program utama
int main () {
	//variabel
	int a, b;
	cout << "masukkan nilai A : ";
cin >> a;
cout << "masukkan nilai b : ";
cin >> b;
cout << "hasil : " << tambahkan (a, b) << endl;
return 0;
}
int tambahkan (int a, int b) {
return a + b;
}