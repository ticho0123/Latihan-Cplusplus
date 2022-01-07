#include <iostream>

using namespace std;

int main()


{
    cout << "Program Menentukan Status Mahasiswa" << endl;
    cout << "Masukkan Nama Anda!\n";
    string nama;
    string hasil;
    cin >> nama;
    cout << "Masukkan IPK Anda!\n";
    float ipk;
    cin >> ipk;
    if (ipk >= 3.5 && ipk <= 4.0) {
        cout << hasil == "Status : Cumlaude \n";
    }
    else if (ipk <= 3.5) {
        cout << hasil == "Status : Lulus \n";
    }
    else if (ipk >=4) {
        cout << hasil == "Status : Error \n";
}
    else if (ipk <2)
        cout << hasil == "Status : Selamat Anda Mengulang! \n";


cout << "=========================\n";
cout << "Nama   : "<<nama <<endl;
cout << "IPK    : "<<ipk <<endl;
cout << "Status : "<<hasil<<endl;
cout << "=========================\n";


    return 0;
}
