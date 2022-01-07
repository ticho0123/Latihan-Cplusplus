#include <iostream>
using namespace std;

int bil;
int main()
{
    cout << "masukkan bilangan: "; cin >> bil;
    if(bil%2!=0) {
        if (bil%3!=0) {
            cout << "bilangan ganjil dan bukan kelipatan 3";
        }
        else if (bil%3==0) {
            cout << "bilangan ganjil dan kelipatan 3";
        }
    }
    else if(bil%2==0) {
        if(bil%3!=0) {
            cout << "bilangan genap dan bukan kelipatan 3";
        }
        else if(bil%3==0) {
            cout << "bilangan genap dan kelipatan 3";
        }
    }
    return 0;
}
