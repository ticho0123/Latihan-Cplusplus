#include <iostream>

#include <stdlib.h>

#include <time.h>

using namespace std;
int benar;
int salah;

int main() {
    srand (time(NULL));
    for (int i=0; i<10; i++) {
        int a, b, c, d, jawab;
        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 4;

//cout << a << " " << b << " " << c << endl;
// cout << a << " " << b << " " << c << endl;//

        string op;
        switch (c) {
            case 0:
                {
                op = "Penjumlahan";
                d = a + b;
                break;
            }
            case 1:
                {
                op = "Pengurangan";
                d = a - b;
                break;
            }
            case 2 :
                {
                op = "Perkalian";
                d = a * b;
                break;
            }
            case 3 :
                {
                op = "Pembagian";
                d = a / b;
                break;

}
        }

    cout << op << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Jawab: ";
    cin >> jawab;
        if (d==jawab) {

            cout << "Benar" << endl;
            benar++;

        } else {
            cout << "Salah" << endl;
            salah++;

}
    cout << endl;
    cout << endl;
}
    cout << "Total Benar :  " << benar << endl;
    cout << "Total Salah :  " << salah << endl;
}
