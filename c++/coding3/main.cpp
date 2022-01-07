#include <iostream>
using namespace std;
/* for (inilialisasi;kondisi;aksi) */

/*kamus*/
int n;
string ucapan;
int i;

/*Algoritme */
int main()
{
    cout << "\tMasukkan jumlah pengulangan\n";
    cin >> n;
    ucapan = "\tSelamat Datang";
    for (i=1;i<=n;i++) {
        cout << ucapan << endl;
    }
}
