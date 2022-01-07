#include <iostream>

using namespace std;


int fungsi2(int b){
if (b==1){
    return 1;
}
    else{
        int x= fungsi2(b-1)+b;
    return  x;
}
}
int main()
{
    cout << fungsi2(5)<<endl;
    return 0;
}
