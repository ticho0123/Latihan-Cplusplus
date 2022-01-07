#include <iostream>
using namespace std;

void pen (int n,int r,int m){
}
void pen1 (int n, int r,int m){
}

int main()
{
    int n,r,m;
    cout << "Input modal awal tabungan/pinjaman = " << endl;
    cin >> n;
    cout <<"Input bunga/thn (%) = "<< endl;
    cin >> r;
    cout <<"Input lama tabungan/pinjaman (thn) = " <<endl;
    cin >> m;
    pen(n,r,m);
    int p = n*r*m/100;
    pen1(n,r,m);
    int p1 = n+n*r*m/100;
    cout << "\nTotal bunga dalam "<<m<<" tahun adalah Rp."<<p<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<m<<" tahun adalah Rp."<<p1<<endl;
    return 0;
}
