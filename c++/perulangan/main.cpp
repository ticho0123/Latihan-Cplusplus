#include <iostream>

using namespace std;

int main(){
int a;
int p;
int angka;
int hasil=1 ;


    cout <<"=====================================================================\n";
    cout << "Masukkan Angka!\n";
    cin >> angka;
    cout << "Masukkan Pangkat!\n";
    cin >> p;


    for(int i=1;i<=p;i++){
            hasil = hasil * angka;


    }
    cout << "hasil Dari "<<angka<<" pangkat "<<p<<" Adalah "<<hasil<<endl;
        cout <<"=====================================================================\n";



    return 0;
}
