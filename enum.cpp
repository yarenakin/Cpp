/*
Numaralandırma Türleri
By Yaren AKIN
09.02.2022
*/

#include <iostream>
#include <assert.h>

using namespace std;

enum designFlags {
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

//#define BOLD 1
//#define ITALICS 2
//#define UNDERLINE 4

void create_design(int design_type)
{
	if (design_type & ITALICS) //içerisinde ITALICS tipi varsa 
	{
		cout << "ITALIK YAZI TIPI\n";
	}
	if (design_type & BOLD) 
	{
		cout<<"BOLD YAZI TIPI\n";
	}
	if (design_type & UNDERLINE)
	{
		cout << "UNDERLINE YAZI TIPI\n";
	}
}

int main()
{
	//cout << "Size: "<<sizeof(designFlags); //4
	create_design(BOLD | ITALICS);

	return 0;
}
