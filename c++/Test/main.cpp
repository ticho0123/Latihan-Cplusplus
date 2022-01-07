#include<iostream>
using namespace std;

int main(){
    int bil,a,b;
    cin>>bil;
    a=bil%7;
    b=bil%15;
    if(a<1){
        cout<<"Cak"<<endl;
    }
    else if(b<1){
        cout <<"Boom"<<endl;
    }
    else {
        cout<<"Cik"<<endl;
    }
}
