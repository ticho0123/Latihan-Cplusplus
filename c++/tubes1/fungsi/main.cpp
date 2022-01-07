#include <iostream>
using namespace std;

int j(int m,int r, int n){
return n*r*m/100;
}
int j1(int p,int l,int z){
return p+l*z*p/100;
}

int main()
{
    int a,b,c,d,f;
    cout<<"Input modal awal tabungan/pinjaman = ";
    cin>>a;
    cout<<"Input bunga/thn (%) = ";
    cin>>b;
    cout<<"Input lama tabungan/pinjaman (thn) = ";
    cin>>c;
    d=j(a,b,c);
    cout<<"\nTotal bunga dalam "<<c<<" tahun adalah Rp."<<d<<endl;
	f=j1(a,b,c);
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<c<<" tahun adalah Rp."<<f<<endl;
    return 0;
}
