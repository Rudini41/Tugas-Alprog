#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct{
 	int tgl;
 	string bulan;
 	string tahun;
 }tanggal;
 
 typedef struct{
 	int menit;
	int jam;
 }jam;
 
 typedef struct{
 	string namaD;
 	string namaB;
 	string ktp;
 	string alamat;
 }dataPel;
 
 typedef struct{
 	string kodeBooking;
 	int noKA;
 	string namaKA;
 	string kelas;
 	string kursi;
 	dataPel dataDiri;
 	string kotaAsalKA;
 	tanggal tglBerangkat;
 	jam jamBerangkat;
 	string kotaTujuanKA;
 	tanggal tglTiba;
 	jam jamTiba;
 	int bayar;
 	int admin;
 	int tBayar;
 }jadwalKA;
 
 //variable global
 	jadwalKA A;
 	int asal, tujuan, a, k, n;
 
 //prototype
 void ketKereta();
 void detailPesanan();
 void dataPelanggan();
 void Asal();
 void Tujuan();
 void berangkat();
 void tiba();
 
 int main(){
 	system("cls");
 	cout << "***************************************************" << endl;
 	cout << "	Program Pemesanan Tiket Kereta Api" 					  << endl;
 	cout << "***************************************************" << endl;
 	
 	// Data Diri
 	dataPelanggan();
 	// keterangan kereta
 	ketKereta();
 	
 	//Asal
 	Asal();
 	// Keberangkatan
 	berangkat();
 	//tujuan
 	Tujuan();
 	// Tiba
 	tiba();
 	//Detail Pemesanan
 	detailPesanan();
 	
 	return 0;
 }
 
 void dataPelanggan(){
 	cout << "\nSilahkan isi Data dibawah ini : \n" << endl;
	cout << "Nama Depan : ";
 	cin >> A.dataDiri.namaD;
 	cout << "Nama Belakang : ";
 	cin >> A.dataDiri.namaB;
 	cout << "No KTP : ";
 	cin >> A.dataDiri.ktp;
 	cout << "Alamat : ";
 	cin >> A.dataDiri.alamat;
 	cout << endl;
 	cout << "===================================================" << endl;
 	
 }
 void ketKereta(){
 	
 	// No KA 
 	A.noKA = 102;
 	A.kodeBooking = "041441ADT";
 	A.namaKA = "RudiniTrain";
	A.kursi = "41A";
 
 	cout << "\nPilih Kelas :  " << endl;
 	cout << "1. Eksekutif" << endl;
 	cout << "2. Ekonomi" << endl << endl;
 	cout << "Masukkan Pilihan Anda : ";
 	cin >> k;
 	
 	if (k == 1 ){
 		A.kelas = "Eksekutif";
 	} else if(k == 2){
 		A.kelas = "Ekonomi";
 	}else{
 		cout << "Tidak ada Pilihan";
 	}
 	
 	cout << endl;
 	cout << "===================================================" << endl;
 }
 
 void Asal(){
 	cout << "Stasiun Asal : " << endl << endl;
 	cout << "1. Bandung(BD)" << endl;
 	cout << "2. Jakarta(JK)" << endl;
 	cout << "3. Malang(ML)" << endl << endl;
 	cout << "Masukkan Pilihan Anda : ";
 	cin >> asal;
 	
 	if (asal == 1 ){
 		A.kotaAsalKA = "Bandung(BD)";
 	} else if(asal == 2){
 		A.kotaAsalKA = "Jakarta(JK)";
 	}else if(asal == 3){
 		A.kotaAsalKA = "Malang(ML)";
 	}else{
 		cout << "Tidak ada Pilihan";
 	}
 }
 void berangkat(){
 	int brngkt;
 	cout << "\nKeberangkatan" << endl;
 	cout << "Masukkan tanggal(dd) : ";
 	cin >> A.tglBerangkat.tgl;
 	cout << "Masukkan Bulan (mm): ";
 	cin >> A.tglBerangkat.bulan;
 	cout << "Masukkan Tahun (yyyy): ";
 	cin >> A.tglBerangkat.tahun;
 	
 	cout << endl;
 	cout << "Waktu Keberangkatan : " << endl << endl;
 	cout << "1. 09:12" << endl;
 	cout << "2. 12:25" << endl;
 	cout << "3. 16:30" << endl;
 	cout << "4. 20:23" << endl << endl;
 	cout << "Masukkan Pilihan Anda : ";
 	cin >> brngkt;
 	
 	if (brngkt == 1 ){
 		A.jamBerangkat.jam =  9;
 		A.jamBerangkat.menit = 12;
 	} else if(brngkt == 2){
 		A.jamBerangkat.jam =  12;
 		A.jamBerangkat.menit = 25;
 	}else if(brngkt == 3){
 		A.jamBerangkat.jam =  16;
		A.jamBerangkat.menit = 30;
 	}else if(brngkt == 4){
 		A.jamBerangkat.jam =  20;
 		A.jamBerangkat.menit = 23;
 	}else{
 		cout << "Tidak ada Pilihan";
 	}
 }
 void Tujuan(){
 	cout << "Stasiun Tujuan : " << endl << endl;
 	cout << "1. Surabaya(SB)" << endl;
 	cout << "2. Cirebon(CB)" << endl;
 	cout << "3. Yogyakarta(YK)" << endl << endl;
 	cout << "Masukkan Pilihan Anda : ";
 	cin >> tujuan;
 	
 	if (tujuan == 1 ){
 		A.kotaTujuanKA =  "Surabaya(SB)";
 	} else if(tujuan == 2){
 		A.kotaTujuanKA =  "Cirebon(CB)";
 }else if(tujuan == 3){
 		A.kotaTujuanKA =  "Yogyakarta(YK)";
 	}else{
 		cout << "Tidak ada Pilihan";
 	}
 }
 void tiba(){
 	if(k == 1 ){
 		if (asal == 1){
 			if(tujuan == 1){
 				A.jamTiba.jam = A.jamBerangkat.jam + 9;
 				A.bayar = 42000;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 4;
 				A.bayar = 37000;
 			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 3;
 				A.bayar = 21000;
 			}else{
 				cout << "Error 1" << endl;
 			}
 		}else if(asal == 2){
 			if(tujuan == 1){
 				A.jamTiba.jam = A.jamBerangkat.jam + 5;
 				A.bayar = 38000;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 6;
 				A.bayar = 35000;
 			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 4;
 				A.bayar = 19000;
 			}else{
 				cout << "Error 2" << endl;
 			}
 		}else if(asal == 3){
 		if(tujuan == 1){
 				A.jamTiba.jam = A.jamBerangkat.jam + 3;
 				A.bayar = 35000;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 5;
 				A.bayar = 30000;
 			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 8;
 				A.bayar = 18000;
 		}else{
 				cout << "Error 3" << endl;
 			}
 		}else{
 			cout << "Masukkan Pilihan yang benar" << endl;
 		}
 	}else if( k == 2){
 		if (asal == 1){
 			if(tujuan == 1){
 			A.jamTiba.jam = A.jamBerangkat.jam + 9;
 				A.bayar = 24000;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 4;
 				A.bayar = 15000;
 			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 3;
				A.bayar = 16000;
 			}else{
 				cout << "Error 1" << endl;
 			}
 		}else if(asal == 2){
 			if(tujuan == 1){
 				A.jamTiba.jam = A.jamBerangkat.jam + 5;
 				A.bayar = 22000;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 6;
 				A.bayar = 14500;
			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 4;
 				A.bayar = 14000;
 			}else{
 				cout << "Error 2" << endl;
 			}
 		}else if(asal == 3){
 			if(tujuan == 1){
 				A.jamTiba.jam = A.jamBerangkat.jam + 3;
 				A.bayar = 12500;
 			}else if(tujuan == 2){
 				A.jamTiba.jam = A.jamBerangkat.jam + 5;
 				A.bayar = 13000;
 			}else if(tujuan == 3){
 				A.jamTiba.jam = A.jamBerangkat.jam + 8;
 				A.bayar = 11000;
 			}else{
 				cout << "Error 3" << endl;
 			}
 		}else{
 			cout << "Masukkan Pilihan yang benar" << endl;
 		}
 	}else{
 	A.bayar = 0;
 	}	
 	
 	
 	if (A.jamTiba.jam < 24){
 		A.tglTiba.tgl = A.tglBerangkat.tgl;
 		A.tglTiba.bulan = A.tglBerangkat.bulan;
 		A.tglTiba.tahun = A.tglBerangkat.tahun;
 	}else{
 		A.tglTiba.tgl = A.tglBerangkat.tgl + 1;
 		A.tglTiba.bulan = A.tglBerangkat.bulan;
 		A.tglTiba.tahun = A.tglBerangkat.tahun;
 	}
 	A.jamTiba.menit = A.jamBerangkat.menit;
 	A.admin = 4500;
 	
 	A.tBayar = A.admin + A.bayar;
 	
 }
 
 void detailPesanan(){
 	system("cls");
 	cout << endl;
 	cout << "***************************************************" << endl;
 	cout << "	Detail Pemesanan Tiket KA " << endl;
 	cout << "***************************************************" << endl;
 	cout << endl;
 	cout << "Kode Booking    : " << A.kodeBooking << endl;
 	cout << "No Kereta Api   : " << A.noKA << endl;
 	cout << "Nama Kereta Api : " << A.namaKA << endl;
 	cout << "Kelas / Kursi   : " << A.kelas << " / " << A.kursi  << endl << endl;
 	cout << "Berangkat 	: " << A.kotaAsalKA << endl;
 	cout << "		  " << A.tglBerangkat.tgl << "-" << A.tglBerangkat.bulan << "-" << A.tglBerangkat.tahun << " " << A.jamBerangkat.jam << ":" << A.jamBerangkat.menit << " WIB" << endl;
 	cout << "Tiba 		: " <<  A.kotaTujuanKA << endl;
 	cout << "		  " << A.tglTiba.tgl << "-" << A.tglTiba.bulan << "-" << A.tglTiba.tahun << " " << A.jamTiba.jam << ":" << A.jamTiba.menit << " WIB" << endl;
 	cout << "---------------------------------------------------" << endl << endl;
 	cout << "Nama   		: " << A.dataDiri.namaD << " " << A.dataDiri.namaB << endl;
 	cout << "No KTP   	: " << A.dataDiri.ktp << endl;
 	cout << "Alamat 		: " << A.dataDiri.alamat << endl;
 	cout << "---------------------------------------------------" << endl << endl;
 	cout << "Jumlah Bayar 	: Rp. " <<  A.bayar << endl;
 	cout << "Biaya Admin 	: Rp. " <<  "  " << A.admin << endl;
 	cout << "		  ------------ +" <<  endl;
 	cout << "Total Bayar 	: Rp. " <<  A.tBayar << endl;
 }