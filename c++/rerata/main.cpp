#include <iostream>

using namespace std;

int v[100]={8,9,10,11,12};
    int i;
    float total,rerata;

int main()
{
i=0;
total=0;
while(i<5){
    total=total+v[i];
    i=i+1;
    cout<<1<<" "<<total<<endl;
}
rerata=total/5;
cout.precision(5);
cout<<total<<endl;
cout << rerata<<endl;
}
