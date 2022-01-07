#include<iostream>
#include<fstream>
using namespace std;

int main (){
    int i,N,umur;
    ofstream aaa;
    aaa.open("du.txt");
    N=5;
    for(i=0;i<N;i++){
        cin >> umur;
        aaa << umur <<endl;
    }
    aaa.close();
    return 0;
}
