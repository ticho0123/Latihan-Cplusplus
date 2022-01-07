#include <iostream>
#include <cmath>
#define PI 3.141592653589793238463
using namespace std;


int main()
{
	float nilai = 0.6;
	cout << "masukkan nilai: ";
	cin >> nilai;
	cout << "sin(" << nilai << ") = " << sin(nilai*(PI / 180.0)) << endl;
	cout << "cos(" << nilai << ") = " << cos(nilai*(PI / 180.0)) << endl;
	cout << "tan(" << nilai << ") = " << tan(nilai*(PI / 180.0)) << endl;
	return 0;
}