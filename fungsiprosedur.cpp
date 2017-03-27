// Program Prosedur
#include <iostream>
#include <string>
using namespace std;

void biodata() 
{ string nama,umur;

	cout << "Nama : ";
	getline(cin,nama);
	cout << "Kelas : ";
	getline(cin,umur);
}
// Program Fungsi
int berhitung(int a, int b)
{
	int c;
	c=a+b;
	cout << "\nhasil hitungan dari " << a << "+" << b << " = ";
	return c;
}
int main(int argc, char** argv) {

	int hasil;
	biodata();
	
	hasil = berhitung(30,11);
	
	cout << hasil;
	
	return 0;
}