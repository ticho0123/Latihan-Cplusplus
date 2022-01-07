# include <iostream.h>
# include <conio.h>


main ()
{

cout<<"\n\t\t\t  PT. Perusahaan Listrik Negara (PLN) \n";
cout<<"\t\t\t  Pemasangan Baru Renkening Pelanggan\n";
gotoxy (5,5);
cout<<"-----------------------------------------------------------------------\n";

gotoxy (5,6); cout<<"| Kode ";
gotoxy (12,6); cout<<"| Jenis Pelanggan";
gotoxy (30,6); cout<<"| No.";
gotoxy (36,6); cout<<"|       Sambungan";
gotoxy (59,6); cout<<"|     Harga";
gotoxy (75,6);  cout<<"|\n";

gotoxy (5,7);
cout<<"|---------------------------------------------------------------------|\n";

gotoxy (5,8); cout<<"|  A.";
gotoxy (12,8); cout<<"|   Rumah Tangga";
gotoxy (30,8); cout<<"|  1";
gotoxy (36,8); cout<<"| Dibawah     450 Watt";
gotoxy (59,8); cout<<"| Rp.   650.000";
gotoxy (75,8);  cout<<"|\n";

gotoxy (5,9); cout<<"| ";
gotoxy (12,9); cout<<"| ";
gotoxy (30,9); cout<<"|  2";
gotoxy (36,9); cout<<"|    451 -    900 Watt";
gotoxy (59,9); cout<<"| Rp.   850.000";
gotoxy (75,9);  cout<<"|\n";

gotoxy (5,10); cout<<"| ";
gotoxy (12,10); cout<<"| ";
gotoxy (30,10); cout<<"|  3";
gotoxy (36,10); cout<<"|    901 -  1.200 Watt";
gotoxy (59,10); cout<<"| Rp. 1.200.000";
gotoxy (75,10);  cout<<"|\n";

gotoxy (5,11); cout<<"| ";
gotoxy (12,11); cout<<"| ";
gotoxy (30,11); cout<<"|  4";
gotoxy (36,11); cout<<"|  1.201 -  2.200 Watt";
gotoxy (59,11); cout<<"| Rp. 1.500.000";
gotoxy (75,11);  cout<<"|\n";

gotoxy (5,12); cout<<"| ";
gotoxy (12,12); cout<<"| ";
gotoxy (30,12); cout<<"|  5";
gotoxy (36,12); cout<<"|  2.201 -  4.400 Watt";
gotoxy (59,12); cout<<"| Rp. 1.750.000";
gotoxy (75,12);  cout<<"|\n";

gotoxy (5,13);
cout<<"|---------------------------------------------------------------------|\n";

gotoxy (5,14); cout<<"|  B.";
gotoxy (12,14); cout<<"|    Industri";
gotoxy (30,14); cout<<"|  6";
gotoxy (36,14); cout<<"|  4.401 -  9.500 Watt";
gotoxy (59,14); cout<<"| Rp. 2.250.000";
gotoxy (75,14);  cout<<"|\n";

gotoxy (5,15); cout<<"|";
gotoxy (12,15); cout<<"|";
gotoxy (30,15); cout<<"|  7";
gotoxy (36,15); cout<<"|  9.501 - 12.000 Watt";
gotoxy (59,15); cout<<"| Rp. 2.750.000";
gotoxy (75,15);  cout<<"|\n";

gotoxy (5,16); cout<<"|";
gotoxy (12,16); cout<<"|";
gotoxy (30,16); cout<<"|  8";
gotoxy (36,16); cout<<"| 12.001 - 16.000 Watt";
gotoxy (59,16); cout<<"| Rp. 3.250.000";
gotoxy (75,16);  cout<<"|\n";

gotoxy (5,17); cout<<"|";
gotoxy (12,17); cout<<"|";
gotoxy (30,17); cout<<"|  9";
gotoxy (36,17); cout<<"| 16.001 - 22.000 Watt";
gotoxy (59,17); cout<<"| Rp. 4.500.000";
gotoxy (75,17);  cout<<"|\n";

gotoxy (5,18); cout<<"|";
gotoxy (12,18); cout<<"|";
gotoxy (30,18); cout<<"| 10";
gotoxy (36,18); cout<<"| Diatas   22.001 Watt";
gotoxy (59,18); cout<<"| Rp. 6.750.000";
gotoxy (75,18);  cout<<"|\n";

gotoxy (5,19);
cout<<"-----------------------------------------------------------------------\n";
getch();
}
