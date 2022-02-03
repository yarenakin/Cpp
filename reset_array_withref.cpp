/******************************************************************************
referans ile diziyi sıfırlayan program
-fonksiyona diziyi parametre olarak gönderme
-dizinin tüm elemanlarını sıfırlama
by Yaren AKIN 

*******************************************************************************/
#include <iostream>
using namespace std;

template<typename T, std::size_t Size>
void reset_array_withref(T (&array)[Size])
{   
    cout<<"\n";
    for(int j=0;j<Size;j++)
    {
        array[j] = 0;
        cout<<array[j];
    }
}

int main()
{
    int example_array[6] = {1,2,3,4,5,6};
    for(int i = 0 ;i<6;i++)
    {
        cout<<example_array[i];
    }
    
    reset_array_withref(example_array);
    return 0;
}

