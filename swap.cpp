/*
SWAP FONKSİYONU
By Yaren AKIN
10.02.2022
*/

#include <iostream>
using namespace std;

void swap_referance(int& p1, int& p2)
{
	int pp = p1;
	p1 = p2;
	p2 = pp;
}

void swap_pointer(int* p1, int* p2)
{
	int pp = *p1;
	*p1 =  *p2;
	*p2 = pp;
}

int main()
{	
	int x = 10;
	int y = 11;

	swap_referance(x, y);
	cout << "x: " << x <<"\n";
	cout << "y: " << y << "\n";

	swap_pointer(&x, &y);
	cout << "x: " << x << "\n";
	cout << "y: " << y << "\n";

	return 0;
}
