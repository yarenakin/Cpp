/*
bit reset 
by Yaren AKIN
09.03.2022
*/

#include <stdio.h>
#include <math.h>

void res(int val,int index)
{
    val  &= ~(1 << index);
    printf("val = %d\n", val);
}
int main(void)
{
    res(65,5); //65 sayısının 5. biti maskelendi.
}
