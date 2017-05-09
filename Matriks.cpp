#include <iostream>
using namespace std;
//Matriks

int main () {

	int M[3][3];
	int M1[3][3];
	int M2[3][3];
	
for(int i=0; i < 3; i++){
	for(int j=0; j < 3; j++){
		cout << "M1 : Masukkan Baris ke-" << i <<" Kolom ke-" << j << " = ";
		cin >> M1[i][j];
		cout << "M2 : Masukkan Baris ke-" << i <<" Kolom ke-" << j << " = ";
		cin >> M2[i][j];
		M[i][j] = M1[i][j] + M2[i][j];
	}
}	

	cout << "_________________________________________________" << endl;
	cout << "M1	" << endl;
	cout << "xxxxxxxxxxxxxxx" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M1[i][j] << " ";

		}
		cout << endl;
	}
	
	cout << endl << endl;
	cout << "M2	" << endl;
	cout << "xxxxxxxxxxxxxxx" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	cout << "M	" << endl;
	cout << "xxxxxxxxxxxxxxx" << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}