//lnx+1 işlemini yapan program kodu.
//by Yaren AKIN
//31.03.2022

#include <iostream>

double pow_ = 1.0;
double result = 0.0;
int const_val = 0;

using namespace std;

double ln(int x,int n)
{
    for (int i = 1; i <= n; i++)
    {
        pow_ = pow_ * x;
    }
    if ((n+1) % 2 == 0)
    {
        const_val =  1;
    }
    else{
        const_val = -1;
    }

    //cout << const_val << "\n";
    //cout << pow_ << "\n";

    result = const_val * (pow_ / n);
    return result;
}
int main()
{
    cout <<"Sonuc: " <<ln(2, 5);
}


