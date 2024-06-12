#include <stdio.h>
#include <complex.h>

int main()
{
	_Dcomplex z;	// Dcomplex는 double타입, Fcomplex와 Lcomplex타입도 있음
	z._Val[0] = 1.0;
	z._Val[1] = 1.0;

	return 0;
}