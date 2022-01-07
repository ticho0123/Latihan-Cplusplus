#include <iostream>

using namespace std;

int f_iterasi (int n){
    int f=1;
    for (int i=1;i<=n;i++){
            cout << "Hitung Faktorial "<< i<<endl;
        f=f*i;
    cout << "Faktorial " << i<< " nilainya "<<f<<endl;
    }
    return f;
}

int f_rec(int n){	
if (n==1 || n==0){
    return 1;
}
    else{
            cout << "Hitung Faktorial " << n<<endl;
        int f = f_rec(n-1) * n;
    cout << "Faktorial " << n<<" nilainya " << f << endl;
    return  f;
    }
}

int main()
{
    cout << f_rec(5)<<endl;
    return 0;
}
