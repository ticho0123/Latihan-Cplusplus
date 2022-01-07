#include <iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

typedef struct {
    float a;
    float t;
}
ma;
ma pa;

int main()
{
    pa.a = 12.5;
    cout << "masukkan panjang sisi alas (m)   : ";
    cin >> pa.a;
    pa.t = 12.5;
    cout << "masukkan panjang sisi tegak (m)  : ";
    cin >> pa.t;
    cout << "sisi miring (m)                  :" << sqrt((pa.a*pa.a) + (pow(pa.t, 2))) << endl;
    cout << "luas (m2)                        : " << 0.5*pa.a*pa.t << endl;
    system("pause");
    return 0;
}
