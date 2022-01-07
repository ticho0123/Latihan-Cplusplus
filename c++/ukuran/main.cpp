#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Masukkan Ukuran bahu\n";
    int bahu;
    cin >> bahu;
    cout << "Masukkan ukuran panjang\n";
    int panjang;
    cin >> panjang;
    cout << "Masukkan lingkar baju\n";
    int lingkar;
    cin lingkar;
}

    if (bahu < 14 && panjang < 60 && lingkar < 120){
            cout<< "Ukuran S";
    }
    else if (bahu >= 14 && bahu < 18 && panjang >=60 && panjang <80 && lingkar >= 120 && lingkar < 180){
cout << "Ukuran M";
}
else if (bahu >= 18 && bahu < 25 && panjang >= 80 && panjang < 100 && lingkar >= 180 && lingkar < 220){
        cout << "Ukuran L";
}
else (bahu >= 25 && panjang >= 100 && lingkar >= 200){
    cout << "Ukuran X";
}


    return 0;
}
