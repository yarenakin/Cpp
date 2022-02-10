/*
Nesne döndüren fonksiyon referans ile L value expression 
By Yaren AKIN
10.02.2022
*/

#include <iostream>
using namespace std;

int g = 10;
int& return_func()
{	
	return g;
}

int& func(int& r)
{	
	++r;
	return r;
}

int main()
{	
	cout <<" g of the first val: "<< g << "\n";
	return_func() = 100;// fonksiyon artık g değişkeni demek
	cout <<" g of the second val: "<< return_func() << "\n";
	func(g);
	cout <<" g of the third val: " << g;

	return 0;
}
