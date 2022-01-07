#include <iostream>
using namespace std;

typedef struct {
    int m;
    int n;
    int r;
    int j;
    int j1;
}
rumus;
rumus rms;


int main()
{
    cout<<"Input modal awal tabungan/pinjaman = ";
    cin>>rms.m;
    cout<<"Input bunga/thn (%) = ";
    cin>>rms.r;
    cout<<"Input lama tabungan/pinjaman (thn) = ";
    cin>>rms.n;

    rms.j=rms.n*rms.r*rms.m/100;
    rms.j1=rms.m+rms.n*rms.r*rms.m/100;
    cout<<"\nTotal bunga dalam "<<rms.n<<" tahun adalah Rp."<<rms.j<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<rms.n<<" tahun adalah Rp."<<rms.j1<<endl;
    return 0;
}
