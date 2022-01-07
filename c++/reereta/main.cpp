#include<iostream>
using namespace std;

int main(){
    int fib=0;
    int a=1;
    int b=1;
    int n;

    cin >> 1;
    for (int i=0;i<n;i++){
        fib=a+b;
        a=b;
        b=fib;

    }
    cout << fib<<endl;
}
