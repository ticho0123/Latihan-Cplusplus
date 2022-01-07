#include <iostream>
using namespace std;

/*kamus*/
int data,jumlah;
    /*Algoritme*/
    /*jumlah <- 0
    do
        input (data)
        jumlah <-jumlah + data
    while (data>=0)
    output (jumlah)*/

int main(){
    jumlah =0;
    do {
        cin >> data;
        jumlah = jumlah + data;
    } while (data>=0);

    cout << jumlah << endl;
}
