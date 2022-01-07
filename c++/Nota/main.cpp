#include <iostream>
#include <conio.h>
#include <math.h>
//#include <tichoh>
using namespace std;

   int jumlah;
       int harga;
       int ppn;
       int hasil;
       int total;
       int kembalian;
       int kembali;
       int tunai;
       int ticho();
       int pilihan();

int ticho(){
 cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
}

int penjumlahan(){
 float bil1, bil2, hasil;
    cout << "Masukkan Nama Produk!" << endl;
    string produk;
    cin >> produk;
    cout << "Masukkan Harga"<<endl;cin >> harga;
    cout << "Masukkan Jumlah Pembelian"<<endl;cin >> jumlah;
     hasil = harga * jumlah;


    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
    cout<<"\t                    Welcome in My Store                       "<<endl;
    cout<<"\t                       Bengkulu City                          "<<endl;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
    cout<<"\tNama Produk        : "<<produk<<endl;
    cout<<"\tHarga              : Rp. "<<harga<<endl;
    cout<<"\tJumlah Pembelian   : " << jumlah << endl;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=<X>."<<endl;
    cout<<"\tTotal Pembelian    : Rp. " << hasil << endl;
    ppn = 0.1*hasil;
    cout<<"\tPPN 10%            : Rp. "<<ppn<<endl;
    total = ppn+hasil;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=<+>."<<endl;
    cout<<"\tTotal              : Rp. "<<total<<endl;
    cout<<"\tTunai              : Rp. ";cin >> tunai;
    kembalian = tunai-total;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=<->."<<endl;
    cout<<"\tKembalian          : Rp. "<<kembalian<<endl;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
    cout<<"\t                       Terima Kasih!                          "<<endl;
    cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
 pilihan();
}
int keluar(){
 ticho();
 cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
 cout<<"\t======= Thank You For Using My Simple Receipt Program. ======="<<endl;
 cout<<"\t==================Powered By Desylo Santicho=================="<<endl;
 cout<<"\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
 ticho();

}
int salah(){
 char ticho;
 cout<<"Perintah salah !"<<endl;
}
int pilihan(){
 float pil;
 cout<<endl;
 cout<<"Masukkan pilihan anda : "; cin>>pil;
 if(pil==1){
  penjumlahan();
 }
 else if(pil==2){
  keluar();
 }
 else {
  salah();
 }
}
int main(){
    cout << "\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<< endl;
    cout << "\t=+=+=+=+=+=+=+= Welcome My Project, Receipt. =+=+=+=+=+=+=+=+="<< endl;
    cout << "\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<< endl;
    cout << "\t=+=+=+=+=+=+=+=+=+=+=+=+=Ticho Store.=+=+=+=+=+=+=+=+=+=+=+=+="<< endl;
    cout << "\t=+=+=+=+=+=+=+=+=+=+=+= Bengkulu City. =+=+=+=+=+=+=+=+=+=+=+="<< endl;
    cout << "\t=+=+=+=+==+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<< endl;
 cout<<"Pilih Operator"<<endl;
 cout<<"______________"<<endl;
 cout<<"1. Input Nota"<<endl;
 cout<<"2. Exit Program"<<endl;
 pilihan();

 getch();
}
