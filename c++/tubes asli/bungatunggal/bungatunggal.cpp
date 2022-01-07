#include <iostream>
#include "bungatunggal.h"
using namespace std;


void bacadata (int &n,int &r,int &m) {
	cout << "Input modal awal tabungan/pinjaman = " << endl;
    cin >> n;
    cout <<"Input bunga/thn (%) = "<< endl;
    cin >> r;
    cout <<"Input lama tabungan/pinjaman (thn) = " <<endl;
    cin >> m;
}
float pen (int n,int r,int m){
	int pel1 = n*r*m*0.01;
	return pel1;
}
float pen1 (int n, int r,int m) {
    int pel2 = n+n*r*m*0.01;
	return pel2;
}
void tulishasil (int pel1, int pel2,int m){
    cout << "\nTotal bunga dalam "<<m<<" tahun adalah Rp."<<pel1<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<m<<" tahun adalah Rp."<<pel2<<endl;
	}