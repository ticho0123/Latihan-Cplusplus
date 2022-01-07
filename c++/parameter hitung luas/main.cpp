#include <iostream>

using namespace std;

int hitung_luas (int a,int t){
int luas = (a*t);
return luas;
}
int main (){
int a,b,hasil;
cout << "Masukkan alas lalu tinggi" << endl;
cin >> a>>b;
hasil=hitung_luas(a,b);
cout<< hasil<<endl;
return 0;
}
