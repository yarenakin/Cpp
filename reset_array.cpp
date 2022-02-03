/******************************************************************************
diziyi sıfırlayan program
-fonksiyona diziyi parametre olarak gönderme
-dizinin tüm elemanlarını sıfırlama
by Yaren AKIN 
*******************************************************************************/

#include <iostream>
using namespace std;

void reset_array(int (*dizi),int size);

int main()
{
    
    int example_array[5] = {1,2,3,4,5};
    for(int i = 0 ;i<5;i++)
    {
        cout<<example_array[i];
    }
    
    reset_array(example_array,5);
    
    return 0;
}

void reset_array(int (*array),int size)
{   
    cout<<"\n";
    for(int j=0;j<size;j++)
    {
        array[j] = 0;
        cout<<array[j];
    }
}
