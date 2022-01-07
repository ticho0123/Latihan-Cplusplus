#include <iostream>
#include <conio.h>
using namespace std;

class aritmatika{
public:
void input();
void proses();
int a,b,n,i,hasil;
};
void aritmatika::input(){
cout<<"Masukan Banyak suku :"<<endl;
cin>>n;
cout<<"Masukan Suku Awal :"<<endl;
cin>>a;
cout<<"Masukan Beda :"<<endl;
cin>>b;
cout<<endl;
}
void aritmatika::proses(){
for(i=0;i<n;i++)
cout<<a+(i*b+(i*i-i))<<endl;
}
int main(int argc, char *argv[])
{
aritmatika deret;
deret.input();
deret.proses();
getch();
return 0;
}
