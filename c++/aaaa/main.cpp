#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b;
    c = a - b;
    if (c < 0) {
         c = c * -1;
     }

     if (((a > 6) || (b > 6)) && (c > 2)) {
         cout << "Tidak Mungkinz";
     } else if ((a >= 6) && (a > b) && (c >= 2)) {
         cout << "Selesai\nPemain 1";
     } else if ((b >= 6) && (b > a) && (c >= 2)) {
         cout << "Selesai\nPemain 2";
     } else if ((a >= 6) && (b < 5)) {
         cout << "Selesai\nPemain 1";
     } else if ((b >= 6) && (a < 5)) {
         cout << "Selesai\nPemain 2";
     } else {
         cout << "Belum Selesai";
     }

    int p1, p2, c;
    cin >> p1 >> p2;
    c = p1 - p2;
    if (c < 0) {
        c = c * -1;
    }

    if (((p1 > 6) || (p2 > 6)) && (c > 2)) {
        cout << "Tidak Mungkin";
    } else if (
        (p1 == 6 && p2 < 5) ||
        (p1 == 7 && p2 == 6) ||
        (p1 == 7 && p2 == 5)
    ) {
        cout << "Selesai Pemain 1";
    } else if (
        (p1 < 5 & p2 == 6) ||
        (p1 == 6 & p2 == 7) ||
        (p1 == 5 & p2 == 7)
    ) {
        cout << "Selesai\nPemain 2";
    }else if (p1 <= 6 & p2 <= 6) {
        cout << "Belum Selesai";
    } else if (
        (p1 >= 7 & p2 >= 7) ||
        (p1 >= 7 & p2 <= 6) || 
        (p1 >= 6 & p2 <= 7)
    ) {
        cout << "Tidak mungkin";
    }
}