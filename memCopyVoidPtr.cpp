#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

void memCopyVoidPtr(void *arraysource,int size,void *arraytarget)
{   
    for(int j = 0; j<size; j++)
    {   
      //Hangi tipte veri geleceğini bilmediğmiz için gelen verileri 1 bytelık verilere bölüyoruz.
      char *target  = static_cast<char*>(arraytarget);
	    char *source  = static_cast<char*>(arraysource);
	    target[j] = source[j];
    }
}

int main()
{   
    int exampleArrSource[] = {3,4};
    int size_of_arr = sizeof(exampleArrSource)/sizeof(exampleArrSource[0]);
    int exampleArrTarget[size_of_arr];
  
    memCopyVoidPtr(exampleArrSource,8,exampleArrTarget);
    for(int i = 0 ;i < size_of_arr ;i++)
        cout<<exampleArrTarget[i];
    return 0;
}
