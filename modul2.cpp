#include <iostream>
using namespace std;
//prototype
void prosesBaca() ;
void prosesTukar() ;
void prosesTampil() ;
//variabel global
int a, b, temp;
//program utama
int main () {
prosesBaca();
prosesTukar();
prosesTampil();
return 0;
}
//proses membaca
void prosesBaca () {
cout << "masukkan nilai A : ";
cin >> a;
cout << "masukkan nilai b : ";
cin >> b;
}
//proses tukar
void prosesTukar () {
temp = b;
b = a;
a = temp;
}
//proses tampil
void prosesTampil () {
cout << "===============" << endl;
cout << "nilai A sekarang : " << a << endl;
cout << "nilai b sekarang : " << b;
}