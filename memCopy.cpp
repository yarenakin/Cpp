/******************************************************************************
dizi kopyalama programı
-bir diziyi başka bir diziye kopyalar
-pointer ile 
by Yaren AKIN
04.02.2022
*******************************************************************************/
#include <iostream>
using namespace std;

void memCopy(int (*arraysource),int size,int (*arraytarget))
{
        for(int j=0;j<size;j++)
        {
            arraytarget[j] = arraysource[j];
            cout<<arraytarget[j];
        }
}

int main()
{
    int exampleArrTarget[2];
    int exampleArrSource[2] = {2,3};
    memCopy(exampleArrSource,2,exampleArrTarget);
    
    return 0;
}
