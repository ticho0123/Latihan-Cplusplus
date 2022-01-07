#include <iostream>

using namespace std;

int main (){
    string kata;
    getline(cin, kata);
    int pjg=kata.length();
    for (int i=pjg;i>0;i--){
        cout << kata[i-1];
    }
}
