#include <iostream>

using namespace std;

typedef struct {
    string nama;
    float ipk;
    char kelas;
}
mahasiswa;
mahasiswa m;

int main()
{
    cout << "Masukkan Nama  : \n";
    cin >> m.nama;
    cout << "Masukkan IPK   : \n";
    cin >> m.ipk;
    cout << "Masukkan Kelas : \n";
    cin >> m.kelas;

    cout << "Mahasiswa an. "<<m.nama;
    cout << " dari kelas "<<m.kelas;
    cout << " Mendapatkan IPK "<<m.ipk<<endl;

}
