/******************************************************************************
dizi kopyalama programı
-bir diziyi başka bir diziye kopyalar
-referans ile
by Yaren AKIN
04.02.2022
*******************************************************************************/

#include <iostream>

using namespace std;
template<typename T, std::size_t Size>
void memCopy(T (&arraysource)[Size],int size,T (&arraytarget)[Size])
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
