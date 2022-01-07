#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan banyak data" << endl;
    cin >> n;

    int data[n];
    cout<<"Masukkan Datanya: ";
    for (int i=0;i<n;i++)
            cin>>data[i];

    int min= data[0];
    for(int i=0;i<n;i++){
        if (data[i]<min){
            min =data[i];
        }
    }

    cout<<"Nilai minimalnya " << min << endl;

    float sum=0;
    for (int i=0; i<n;i++)
    sum=sum+data[i];
    float rerata = sum/n;

    sum=0;
    for (int i=0; i<n;i++)
        sum=sum+ (data[i]-rerata)*(data[i]-rerata);
    float stadev = sqrt(sum/n);

    cout<<"STDnya " << stadev<<endl;
}
