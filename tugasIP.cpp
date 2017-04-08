#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int min);
void cetak ();

	float ip, rataip;
	int jmlMhs, mhsLlus, mhsTdkLlus;
	bool valid;

	int main() {
	do {
		cout <<"masukan nilai : " ;
		cin >> ip ;
		valid = iswithinrange(ip,4,0);
	if (valid) {
		if (ip >=2.75) {
		mhsLlus++;
	}else{
		mhsTdkLlus++;
	}
	rataip = rataip + ip;
	jmlMhs++;
	}else{
		cout << "===========================================" << endl;
		cout << "tidak ada data" << endl;
	}
	}
	while (ip != -999);
	cetak();
	}
	bool iswithinrange (float ip, int max,int min) {
	if (ip > max || ip <= 0) {
		return false;
	}
	return true;
	}
	void cetak () {
	cout << "==============================================" <<endl;
	cout <<"banyaknya mahasiswa : " << jmlMhs << endl;
	cout <<"banyaknya jumlah lulus : " << mhsLlus << endl;
	cout <<"banyaknya yang tidak lulus : " << mhsTdkLlus << endl;
	cout <<"rata-rata nilai IP : " << (rataip/jmlMhs) << endl;
	
}