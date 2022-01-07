#include<iostream>
using namespace std;

int main(){
    int sp1,sp2;
    cin >> sp1;
    cin >>sp2;
    if(sp1>=6&&sp2<=6){
        cout << "Selesai\n";
        cout << "Pemain 1";
    }
    else if (sp2 >= 6&&sp1<=6){
        cout << "Selesai\n";
        cout << "Pemain 2";
    }
    else if (sp1<=5&&sp2 <=5){
        cout <<"Belum Selesai";
    }
    else if (sp1==5&&sp2==5){
    cout <<"Tidak Mungkin";
}
else {
        cout<<"Tidak Mungkin";
}
}
