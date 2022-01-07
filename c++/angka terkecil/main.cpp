#include <iostream>

using namespace std;
int a;
int b;
int c;

int main()
{
    cout << "Angka Terkecil! \n" << endl;
    cout << "Masukkan 3 angka! \n";
    cout << "Angka pertama\n";
    cin >> a;
    cout << "Angka Kedua\n";
    cin >> b;
    cout << "Angka Ketiga \n";
    cin >> c;
    if (a > b  && a > c){
        cout << "Angka Terbesar adalah : " << a ;
    }
    else if (b > a && b > c){
        cout << "Angka Terbesar adalah : " << b ;
    }
    else
        cout << "Angka Terbesar adalah : " << c ;


    return 0;
}
