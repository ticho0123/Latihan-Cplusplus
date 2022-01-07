#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

main (void) {
   string username;
   int password;
   int i;
   cout << "------------------------------------------\n";
   cout << "Selamat Datang Di Form Login Informatika \n";
   cout << "------------------------------------------\n\n";
   string user ="andi";
   int pass = 12345;
   int login=0;
   i = 1;

   do {
       cout << "Username : "; cin >> username;
       cout << "Password : "; cin >> password;
       if (username == user && password == pass) {
           cout << "\n--------------------\n";
           cout << "Anda Berhasil Login" << endl;
           cout << "--------------------\n\n";
           i=4;
           login=1;        }
       else {
           cout << "\n------------------------\n";
           cout << "Maaf ID & PASSWORD Salah!" << endl;                         cout << "-------------------------\n\n";
           i = i +1;
       }
    }while (i <= 3);
    if(login >= 3){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
       cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";      }
       else {
            cout << "\tSelamat Datang Di Aplikasi Cyber Capitalist\n";
            cout << "\tPilih Menu Yang Anda Mau\n";
            cout << "\tMakanan/Minumam\n";
            string makanan;
            string minuman;
            cin >> makanan;
            if (makanan == "Makanan")
            {
                cout <<"1. Nabati";
                cout <<"2. Hewani";
                string nabati;
                string hewani;
                cin >> nabati;


            }
            if (minuman == "minuman")
            {
                cout <<"1. Nabati";
                cout <<"2. Hewani";
                string nabati;
            }



   //getch();

}
}
