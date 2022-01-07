#include <iostream>
using namespace std;


int n,r, m,p,p1;
void pen (){
    p = n*r*m/100;
}
void pen1 (){
    p1 = n+r*m*n/100;
}

int main()
{
    cout << "Input modal awal tabungan/pinjaman = " << endl;
    cin >> n;
    cout <<"Input bunga/thn (%) = "<< endl;
    cin >> r;
    cout <<"Input lama tabungan/pinjaman (thn) = " <<endl;
    cin >> m;
    pen();
    pen1();
    cout << "\nTotal bunga dalam "<<m<<" tahun adalah Rp."<<p<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<m<<" tahun adalah Rp."<<p1<<endl;
    return 0;
}
