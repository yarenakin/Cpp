/*
top-level const,low-level const

		  |              left  right
int       *       i1;
		  |              no    no     can change *i1 and i1

int const *       i2;
		  |              yes   no     cannot change *i2 but can change i2

int       * const i3;
		  |              no    yes    can change *i3 but i3 cannot be changed

int const * const i4;
		  |              yes   yes    cannot change *i4 or i4
By Yaren AKIN
10.02.2022
*/

#include <iostream>
using namespace std;

int x = 1;
int *const p = &x; //top level const 
const int* p2 = &x; //low level const 
const int* const p3 = p2; //sağ taraf top-level,sol taraf low-level const

int main()
{	
	cout <<"p of the value: "<< *p <<"\n";
	cout <<"p2 of the value: " << *p2 << "\n";
	cout <<"p3 of the value: " << *p3 << "\n";

	return 0;
}
