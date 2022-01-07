#include <iostream>

using namespace std;
   int jumlah;
       int harga;
       int ppn;
       int hasil;
       int total;
       int kembalian;
       int kembali;
       int tunai;
       int ticho;

int main()
{

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
}


