#include <iostream>
#include "bungatunggal.h"
using namespace std;


int main()
{
	int n,r,m,pel1,pel2;
	bacadata (n, r, m);
	pel1 = pen (n,r,m);
	pel2 = pen1 (n,r,m);
	tulishasil (pel1, pel2, m);
}
