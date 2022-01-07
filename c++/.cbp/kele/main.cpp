#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream myFile;
    int sementara;
    char nama[100];
    int jumlah=0;
    int n;

    cout << "Masukan Data: ";
    cin >> nama;

    myFile.open(nama);

    if (myFile.is_open()){

        while (myFile){
            myFile >> sementara;
            jumlah++;
            if (myFile){
            cout << sementara << endl;
        }
        }
        cout << "Jumlah data adalah: " << jumlah -1 << endl;
        cout << "Rata-rata data adalah: " << jumlah  << endl;
    }
    else {
        cout << "File tidak ditemukan" << endl;
    }
    myFile.close();

    return 0;
}
