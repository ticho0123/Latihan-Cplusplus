#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++){
        if(a[i]==toupper(a[i])){
            putchar(tolower(a[i]));
        }else{
    putchar(toupper(a[i]));}
    }

}
