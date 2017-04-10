#include <iostream>
using namespace std;

typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;
} jam;

typedef struct {
	int noKA;
	string kotaAsalKA;
	jam jmbrngkt;
	tanggal tglbrngkt;
	string kotatujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jdwalKA;

int main () {
	jdwalKA jdwalkeretaApi;
	
	jdwalkeretaApi.noKA = 1;
	jdwalkeretaApi.kotaAsalKA = "JOGJAKARTA";
	jdwalkeretaApi.jmbrngkt.jam = 12;
	jdwalkeretaApi.jmbrngkt.menit = 12;
	jdwalkeretaApi.jmbrngkt.detik = 12;
	jdwalkeretaApi.tglbrngkt.hari = "sabtu/ 09";
	jdwalkeretaApi.tglbrngkt.bulan = "desember";
	jdwalkeretaApi.tglbrngkt.tahun = "2015";
	jdwalkeretaApi.kotatujuanKA = "JAYAPURA";
	jdwalkeretaApi.jamTiba.jam = 13;
	jdwalkeretaApi.jamTiba.menit = 13;
	jdwalkeretaApi.jamTiba.detik = 13;
	jdwalkeretaApi.tanggalTiba.hari = "senin/ 11";
	jdwalkeretaApi.tanggalTiba.bulan = "desember";
	jdwalkeretaApi.tanggalTiba.tahun = "2015";
	
	
	cout << "no kereta : " << jdwalkeretaApi.noKA << endl;
	cout << jdwalkeretaApi.kotaAsalKA << endl;
	cout << jdwalkeretaApi.jmbrngkt.jam << " - " << jdwalkeretaApi.jmbrngkt.menit << " - " << jdwalkeretaApi.jmbrngkt.detik << endl;
	cout << jdwalkeretaApi.tglbrngkt.hari << " - " << jdwalkeretaApi.tglbrngkt.bulan << " - " << jdwalkeretaApi.tglbrngkt.tahun << endl;
	cout << jdwalkeretaApi.kotatujuanKA << endl;

return 0;	
}
 




	
	