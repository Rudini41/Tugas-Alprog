#include <iostream>
using namespace std;

//Array

int main () {
		char nilai [10];
		int i, hasil=0;
		
		for (int i=0; i< 10; i++) {
		cout << "Masukkan Karakter : ";
		cin >> nilai[i];
		
		if (nilai[i] == 'a' || nilai[i] == 'A') {
			hasil++;
		}
		}
		cout << "Hasil elemen array adalah : ";
		for (int i=0; i< 10; i++) {
			cout << nilai [i];
		}
		cout << endl << "Jumlah Karakter a adalah: " << hasil;
}