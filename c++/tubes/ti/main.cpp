#include <iostream>
using namespace std;

int main (){
    char a = 3;

    char mat[a][a];

    for(int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            cin >> mat[i][j];
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<a;j++){
            if(mat[i][j]=='A'||mat[i][j]=='I'||mat[i][j]=='U'||mat[i][j]=='E'||mat[i][j]=='O'){
                cout << "V" << " ";
            }
            else{
                cout << "K"<<" ";
            }
        }
        cout << endl;
    }
}
